jQuery(document).ready(function($) {
  vmlComputers.init();
});


var vmlComputers = {
  init : function() {
    this.getDesktops();
    this.getWindowsLaptops();
    this.getMacBookAir();
    this.getMacBook();
  },

  htmlTemplate : function(numAvail, icon, techName) {
    return '<i class="fa fa-'+ icon +' device-icon"></i><span class="device-name">'+ techName +' </span><span class="device-numbers">'+ numAvail +'</span>';
  },

  getDesktops : function() {
    jQuery.get("/compavailability/homepage.php?region=vml", function(data) {
      jQuery('<div/>', {
        'class': 'row',
        html: vmlComputers.htmlTemplate(data, 'desktop', 'Desktops')
      }).appendTo('.availability-vml');
    })
      .fail(function() {
        console.log( "desktops error" );
      });
  },

  getWindowsLaptops : function() {
    jQuery.get("/sites/default/files/techlending/devices_data/aggregate.json", function(data) {
      var winlap = data.vetmed.lap.available.win;
      jQuery("<span class='tab'>Windows Laptops: </span>").insertAfter(".fa-icon-windows");
      jQuery('<div/>', {
          'class': 'row',
          html: vmlComputers.htmlTemplate(winlap, 'windows', 'Windows Laptops')
        }).appendTo('.availability-vml');
      }, "json")
      .fail(function() {
        console.log( "win lap error" );
      });
  },

  getMacBookAir : function() {
    jQuery.get("/sites/default/files/techlending/devices_data/2123155.json", function(data) {
      var numAvail    = data.buildings.vetmed["lending-periods"]["laptop-pat"].techlend;
      jQuery('<div/>', {
          'class': 'row',
          html: vmlComputers.htmlTemplate(numAvail, 'apple', 'MacBook Airs')
        }).appendTo('.availability-vml');
      }, "json")
      .fail(function() {
        console.log( "mac book air error" );
      });
  },

  getMacBook : function() {
    jQuery.get("/sites/default/files/techlending/devices_data/2081286.json", function(data) {
      var numAvail    = data.buildings.vetmed["lending-periods"]["laptop-pat"].techlend;
      jQuery('<div/>', {
          'class': 'row',
          html: vmlComputers.htmlTemplate(numAvail, 'apple', 'MacBooks')
        }).appendTo('.availability-vml');
      }, "json")
      .fail(function() {
        console.log( "macbook error" );
      });
  },
};