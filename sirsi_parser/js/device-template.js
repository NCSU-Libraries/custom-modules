Drupal.behaviors.sirsi_parser = {
  attach : function() {
    (function($) {
      var catkey_raw = Drupal.settings.sirsi_parser.catkey;
      var device_template = Handlebars.compile([
        '{{#if buildings}}',
        '<div class="available">',
          '<table>',
            '<thead>',
              '<tr>',
                '<th>Library</th>',
                '<th>Lending Period</th>',
                '<th>Available for Checkout</th>',
              '</tr>',
            '</thead>',
            '<tbody>',
              '{{#each buildings}}',
                '<tr class="building">',
                  '<td>{{library @key}}</td>',
                  '{{#each lending-periods}}',
                    '<td class="lending">{{lend @key}}</td> {{! the lending period array key }}',
                    '<td class="availability">',
                    '{{#unless this.techlend}}',
                      '0 of {{this.total}}</td>',
                    '{{/unless}}',
                    '{{#if this.techlend}}',
                      '{{this.techlend}} of {{this.total}}</td>',
                    '{{/if}}',
                  '</tr>',
                '{{/each}}',
              '{{/each}}',
            '</tbody>',
          '</table>',
        '</div>',
        '{{/if}}'
      ].join(''));

      // Do the AJAX load of the device's availability in Sirsi, output according
      // to a few Handlebars helpers.
      $.ajax({
            url: Drupal.settings.sirsi_parser.base_url + '/sites/default/files/techlending/devices_data/' + catkey_raw +'.json',
            error: function (e, t, n) {
                console.log(t + ": " + n);
                console.log(e);
            },
            success: function (e, t, n) {
              console.log(Drupal.settings.sirsi_parser.base_url + '/sites/default/files/techlending/devices_data/' + catkey_raw +'.json')
                jQuery(".hb").html(device_template(e));
            }
      });
        Handlebars.registerHelper("library", function (e) {
          switch (e) {
          case "hunt":
              return "James B. Hunt Jr. Library";
          case "dhhill":
              return "D. H. Hill Library";
          case "design":
              return "Design Library";
          case "vetmed":
              return "Veternary Medicine Library";
          case "nrl":
              return "Natural Resources Library";
          default:
              // _gaq = _gaq || [];
              // _gaq.push(
              //     ['_setAccount', 'UA-17138302-1'],
              //     ['_trackEvent', 'techlending errors', 'library location error for '+ document.URL.slice(document.URL.lastIndexOf('/')+1), e, undefined, true]
              //     );
                // ga('send', 'event', 'techlending errors', 'library location error for '+ document.URL.slice(document.URL.lastIndexOf('/')+1), e, undefined, true);
              break;
          }
        });
        Handlebars.registerHelper("lend", function (e) {
          switch (e) {
            case "equip-4hr":
            case "equ-4h-low":
            case "laptop-pat":
                return "4 hour";
            case "equip-1day":
                return "1 day";
            case "equip-1wk":
                return "1 week";
            case "laptop-any":
                return "2 hour";
            default:
                // ga('send', 'event', 'techlending errors', 'lending period error for '+ document.URL.slice(document.URL.lastIndexOf('/')+1),e, undefined, true);
                // _gaq = _gaq || [];
                // _gaq.push(
                //   ['_setAccount', 'UA-17138302-1'],
                //   ['_trackEvent', 'techlending errors', 'lending period error for '+ document.URL.slice(document.URL.lastIndexOf('/')+1), e, undefined, true]
                //   );
                break;
          }
        });
    })(jQuery);
  }
};


