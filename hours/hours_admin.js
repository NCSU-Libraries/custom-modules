var admin = {
	init : function(){
		form = document.getElementById('library-hours-node-form');
		doc = document.contains(form);
		if(doc){
			clearInterval(admin.interval);
			admin.initial_events();
			admin.handle_events();
		}
	},
	initial_events : function(){
		// document.getElementById('edit-workbench-access--2').value = '126';
		document.getElementById('edit-field-hours-und-0-value2-datepicker-popup-0').parentNode.style.opacity = 0;
		// move midnight check box to date box
		document.getElementById('edit-field-hours-und-0-value2').appendChild(document.getElementById('edit-field-open-to-midnight'));
		// hide midnight check box if already checked
		if(document.getElementById('edit-field-open-to-midnight-und').checked){
			document.getElementById('edit-field-hours-und-0-value2-timeEntry-popup-1').value = '11:59pm';
			document.getElementById('edit-field-hours-und-0-value2-timeEntry-popup-1').parentNode.style.opacity = 0;
		}

		// hide exclude and include items
		document.getElementById('edit-field-hours-und-0-rrule-show-exceptions').parentNode.style.display =
		document.getElementById('edit-field-hours-und-0-rrule-show-additions').parentNode.style.display = 'none';

	},

	handle_events : function(){
		admin.sem_json_url = '/rest_hours/views/current_semester.json';
		// select for semester
		document.getElementById('edit-field-hours-semester-und').onchange = function(){
			admin.cur_semester_id = this.value;
			admin.load_ajax_file();
		}

		// set interval to add to title
		admin.title_int = setInterval('admin.set_title()', 500);

		// add event to hide/show repeat
		document.getElementById('edit-field-hours-und-0-show-repeat-settings').onchange = function(){
			if(document.getElementById('edit-field-hours-und-0-show-repeat-settings').checked){
				document.getElementById('repeat-settings-fieldset').style.display = 'block';
			} else{
				document.getElementById('repeat-settings-fieldset').style.display = 'none';
			}
		}

		// if exception is checked hide repeat stuff
		document.getElementById('edit-field-exception-und').onchange = function(){
			if(document.getElementById('edit-field-hours-und-0-show-repeat-settings').checked){
				document.getElementById('edit-field-hours-und-0-show-repeat-settings').checked = false;
				document.getElementById('repeat-settings-fieldset').style.display = 'none';
			}
		}

		// 24 hours or closed will hide the time boxes for the hours input
		document.getElementById('edit-field-closed-und').onchange =
		document.getElementById('edit-field-24-hours-und').onchange = function(){
			if(this.checked){
				document.getElementById('edit-field-hours-und-0-value-timeEntry-popup-1').value = '12:01am';
				document.getElementById('edit-field-hours-und-0-value2-timeEntry-popup-1').value = '12:01am';
				// set day hours to midnight
				document.getElementById('edit-field-hours-und-0-value-timeEntry-popup-1').parentNode.style.display = 'none';
				document.getElementById('edit-field-hours-und-0-value2-timeEntry-popup-1').parentNode.style.display = 'none';
			} else{
				document.getElementById('edit-field-hours-und-0-value-timeEntry-popup-1').parentNode.style.display = 'block';
				document.getElementById('edit-field-hours-und-0-value2-timeEntry-popup-1').parentNode.style.display = 'block';
			}
		}

		// auto set end date to start date
		document.getElementById('edit-field-hours-und-0-value-datepicker-popup-0').onchange = function(){
			document.getElementById('edit-field-hours-und-0-value2-datepicker-popup-0').value = this.value;
		}

		// if 'open to midnight' is checked change close time to 'midnight'
		document.getElementById('edit-field-open-to-midnight-und').onchange = function(){
			if(this.checked){
				document.getElementById('edit-field-hours-und-0-value2-timeEntry-popup-1').value = '11:59pm';
				document.getElementById('edit-field-hours-und-0-value2-timeEntry-popup-1').parentNode.style.opacity = 0;
			} else{
				document.getElementById('edit-field-hours-und-0-value2-timeEntry-popup-1').parentNode.style.opacity = 1;
			}
		}

		// 'day of week' check boxes events
		document.getElementById('edit-field-hours-und-0-rrule-weekly-byday-su').onchange =
		document.getElementById('edit-field-hours-und-0-rrule-weekly-byday-mo').onchange =
		document.getElementById('edit-field-hours-und-0-rrule-weekly-byday-tu').onchange =
		document.getElementById('edit-field-hours-und-0-rrule-weekly-byday-we').onchange =
		document.getElementById('edit-field-hours-und-0-rrule-weekly-byday-th').onchange =
		document.getElementById('edit-field-hours-und-0-rrule-weekly-byday-fr').onchange =
		document.getElementById('edit-field-hours-und-0-rrule-weekly-byday-sa').onchange = function(){
			admin.alter_start_date(this);
		}

		// set end date to end of repeate rule date
		document.getElementById('edit-field-hours-und-0-rrule-until-child-datetime-datepicker-popup-0').onchange = function(){
			document.getElementById('edit-field-hours-und-0-value2-datepicker-popup-0').value = this.value;
		}
	},
	alter_start_date : function(elem){
		admin.new_start_date = (admin.new_start_date) ? admin.new_start_date : document.getElementById('edit-field-hours-und-0-value-datepicker-popup-0').value;
		var raw_date = admin.new_start_date.split('/');
		var month = raw_date[0];
		var day = raw_date[1];
		var year = raw_date[2];
		var days_this_month = admin.daysInMonth(month,year);
		// var utc_date = Date.UTC(raw_date[2],raw_date[0],raw_date[1]);
		var date = new Date(raw_date);
		var sem_day_of_week = date.getDay();

		//figure out first checked box
		var elem_ary = new Array('edit-field-hours-und-0-rrule-weekly-byday-su','edit-field-hours-und-0-rrule-weekly-byday-mo','edit-field-hours-und-0-rrule-weekly-byday-tu','edit-field-hours-und-0-rrule-weekly-byday-we','edit-field-hours-und-0-rrule-weekly-byday-th','edit-field-hours-und-0-rrule-weekly-byday-fr','edit-field-hours-und-0-rrule-weekly-byday-sa');
		for(i=0;i<7;i++){
			e = document.getElementById(elem_ary[i]);
			if(e.checked && i >= sem_day_of_week){
				elem_day_of_week = i;
				break;
			} else{
				elem_day_of_week = sem_day_of_week;
			}
		}
		// figure out which day of week i want to change the date too
		if(elem_day_of_week - sem_day_of_week < 0){
			day_difference = elem_day_of_week - sem_day_of_week + 7;
		} else{
			day_difference = elem_day_of_week - sem_day_of_week;
		}
		var new_day = date.getDate()+day_difference;
		if(new_day > days_this_month){
			new_day = new_day - days_this_month;
			month++;
		}

		// set times
		document.getElementById('edit-field-hours-und-0-value-datepicker-popup-0').value =
		document.getElementById('edit-field-hours-und-0-value2-datepicker-popup-0').value = month+'/'+new_day+'/'+year;
	},
	set_title : function(){
		// add days of week to title ex: [mon-fri]
		chillens = document.getElementById('edit-field-hours-und-0-rrule-weekly-byday').children;
		title_days_ary = [];
		admin.title_days = [''];
		exception = '';
		exam_hours = '';
		title = document.getElementById('edit-title').value.split('[');
		cnt=0;

		for(i=0;i<chillens.length;i++){
			if(chillens[i].getElementsByTagName('input')[0].checked == true){
				title_days_ary[cnt] = chillens[i].getElementsByTagName('label')[0].firstChild.data.replace(/\s/g, '');
				cnt++;
			}
		}

		// exceptions (closed|exception)
		if(document.getElementById('edit-field-closed-und').checked){ //Closed
			start_date_raw = document.getElementById('edit-field-hours-und-0-value-datepicker-popup-0').value;
			end_date_raw = document.getElementById('edit-field-hours-und-0-rrule-until-child-datetime-datepicker-popup-0').value;
			start_date_ary = start_date_raw.split('/');
			end_date_ary = end_date_raw.split('/');
			start_date = start_date_ary[0]+'/'+start_date_ary[1];
			end_date = end_date_ary[0]+'/'+end_date_ary[1];

			exception = (end_date_ary.length > 1) ? '[Closed ' +start_date+'-'+end_date : '[Closed ' +start_date;

			if(title_days_ary[0] != undefined){
				admin.title_days = (title_days_ary.length > 1) ? title_days_ary[0]+'-'+title_days_ary[title_days_ary.length-1]+']' : title_days_ary[0]+']';
			} else{
				admin.title_days = ']';
			}
		} else if(document.getElementById('edit-field-exception-und').checked){ //Exception
			start_date_raw = document.getElementById('edit-field-hours-und-0-value-datepicker-popup-0').value;
			end_date_raw = document.getElementById('edit-field-hours-und-0-rrule-until-child-datetime-datepicker-popup-0').value;
			start_date_ary = start_date_raw.split('/');
			end_date_ary = end_date_raw.split('/');
			start_date = start_date_ary[0]+'/'+start_date_ary[1];
			end_date = end_date_ary[0]+'/'+end_date_ary[1];

			exception = (end_date_ary.length > 1) ? '[Exception ' +start_date+'-'+end_date : '[Exception ' +start_date;
			admin.title_days = ']';//(start_date == end_date) ? start_date+']' : exception+']';
		} else if(document.getElementById('edit-field-exam-hours-und').checked){ //exam hours
			start_date_raw = document.getElementById('edit-field-hours-und-0-value-datepicker-popup-0').value;
			end_date_raw = document.getElementById('edit-field-hours-und-0-rrule-until-child-datetime-datepicker-popup-0').value;
			start_date_ary = start_date_raw.split('/');
			end_date_ary = end_date_raw.split('/');
			start_date = start_date_ary[0]+'/'+start_date_ary[1];
			end_date = end_date_ary[0]+'/'+end_date_ary[1];

			exception = (end_date_ary.length > 1) ? '[Exam Hours ' +start_date+'-'+end_date : '[Exam Hours ' +start_date;
			admin.title_days = ']';
		}else{ //regular weekly days
			if(title_days_ary[0] != undefined){
				admin.title_days = (title_days_ary.length > 1) ? '['+title_days_ary[0]+'-'+title_days_ary[title_days_ary.length-1]+']' : '['+title_days_ary[0]+']';
			}
		}

		document.getElementById('edit-title').value = title[0]+exception+admin.title_days;
	},
	daysInMonth : function(month,year) {
    	return new Date(year, month, 0).getDate();
	},
	set_dates : function(){
		// get hours info from json
		for(i=0;i<admin.sem_json.length;i++){
			if(admin.sem_json[i].nid == admin.cur_semester_id){
				split_start_date = admin.sem_json[i].start_date.split('-');
				split_end_date = admin.sem_json[i].end_date.split('-');
				admin.new_start_date = split_start_date[1]+'/'+split_start_date[2]+'/'+split_start_date[0];
				new_end_date = split_end_date[1]+'/'+split_end_date[2]+'/'+split_end_date[0];
				// set dates
				document.getElementById('edit-field-hours-und-0-value-datepicker-popup-0').value = admin.new_start_date;
				document.getElementById('edit-field-hours-und-0-value2-datepicker-popup-0').value = admin.new_start_date;
				// select repeat
				document.getElementById('edit-field-hours-und-0-show-repeat-settings').checked = true;
				// show repeat values
				document.getElementById('repeat-settings-fieldset').style.display = 'block';
				// set end repeat date
				document.getElementById('edit-field-hours-und-0-rrule-range-of-repeat-until').checked = true;
				document.getElementById('edit-field-hours-und-0-rrule-until-child-datetime-datepicker-popup-0').value = new_end_date;
			}
		}
	},
	load_ajax_file : function(){
		var xmlhttp;
		if (window.XMLHttpRequest){// code for IE7+, Firefox, Chrome, Opera, Safari
  			xmlhttp=new XMLHttpRequest();
  		} else {// code for IE6, IE5
  			xmlhttp=new ActiveXObject("Microsoft.XMLHTTP");
  		}
		xmlhttp.onreadystatechange=function(){
  			if (xmlhttp.readyState==4 && xmlhttp.status==200){
  				admin.sem_json = JSON.parse(xmlhttp.responseText);
  				admin.set_dates();
    		}
  		}
		xmlhttp.open("GET",admin.sem_json_url,true);
		xmlhttp.send();
	},
	get_day_of_week : function(str){
		if(str == 'SU'){
			return 0;
		} else if(str == 'MO'){
			return 1;
		} else if(str == 'TU'){
			return 2;
		} else if(str == 'WE'){
			return 3;
		} else if(str == 'TH'){
			return 4;
		} else if(str == 'FR'){
			return 5;
		} else if(str == 'SA'){
			return 6;
		}
	}
}

admin.interval = setInterval('admin.init()', 500);




