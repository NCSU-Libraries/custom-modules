jQuery(document).ready(function($) {
  nrlComputers.init();
});


var nrlComputers = {
  init : function() {
    this.getLaptops();
  },

  htmlTemplate : function(numAvail, icon, techName) {
    return '<i class="fa fa-'+ icon +' medium-2 columns"></i><span class="medium-8 columns">'+ techName +': </span><span class="medium-2 columns">'+ numAvail +'</span>';
  },

  getLaptops : function() {
    jQuery.get("/sites/default/files/techlending/devices_data/aggregate.json", function(data) {
      // var count = writeNumbers(data, ['lap'], ['nrl']);
      jQuery('<div/>', {
          'class': 'row',
          html: nrlComputers.htmlTemplate(data.nrl.lap.available.mac, 'apple', 'Mac Laptops')
        }).appendTo('.availability-nrl');
      jQuery('<div/>', {
          'class': 'row',
          html: nrlComputers.htmlTemplate(data.nrl.lap.available.win, 'windows', 'Windows Laptops')
        }).appendTo('.availability-nrl');
      })
      .fail(function() {
        console.log( "apple error" );
      });
  },

};