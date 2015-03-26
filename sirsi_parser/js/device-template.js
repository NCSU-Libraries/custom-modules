var d = {
    init : function(){
        d.catkey_raw = Drupal.settings.sirsi_parser.catkey;

        $.ajax({
            url: Drupal.settings.sirsi_parser.base_url + '/sites/default/files/techlending/devices_data/' + d.catkey_raw +'.json',
            error: function (e, t, n) {
                console.log(t + ": " + n);
                console.log(e);
            },
            success: function (e, t, n) {
                console.log(Drupal.settings.sirsi_parser.base_url + '/sites/default/files/techlending/devices_data/' + d.catkey_raw +'.json')
                d.data = e;
                // make sure there is actual data for device
                if(e.buildings){
                    d.compileHTML();
                }
            }
        });
    },

    compileHTML : function(){
        var p = d.data.buildings;
        // build html string
        d.str = '<div class="available">';
        d.str += '<table>';
        d.str += '<thead>';
        d.str += '<tr>';
        d.str += '<th>Library</th>';
        d.str += '<th>Lending Period</th>';
        d.str += '<th>Available for Checkout</th>';
        d.str += '</tr>';
        d.str += '</thead>';
        d.str += '<tbody>';

        // loop through to get buildings and lending periods
        for (var key in p) {
            if (p.hasOwnProperty(key)) {
                var building = d.getBuilding(key);
                var lendPeriod = p[key]['lending-periods'];
                for(var lend in lendPeriod){
                    var total = lendPeriod[lend]['total'];
                    var available = lendPeriod[lend]['techlend'];
                    if(!available){
                        var checkedout = lendPeriod[lend]['checkedout'];
                        available = total - checkedout;
                    }
                    d.str += '<tr class="building">';
                    d.str += '<td>'+building+'</td>';
                    d.str += '<td>'+d.getLendPeriod(lend)+'</td>';
                    d.str += '<td>'+available+' of '+total+'</td>';
                    d.str += '</tr>';
                }

            }
        }

        d.str += '</tbody>';
        d.str += '</table>';
        d.str += '</div>';

        $(".hb").html(d.str);
    },

    getBuilding : function(val){
        switch (val) {
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
            case "textiles":
                return "Textiles Library";
            default:
                break;
        }
    },

    getLendPeriod : function(val){
        switch (val) {
            case "equip-4hr":
                return "4 hour";
            case "equ-4h-low":
                return "4 hour";
            case "laptop-pat":
                return "4 hour";
            case "equip-1day":
                return "1 day";
            case "equ-1w-low":
                return "1 week";
            case "equip-1wk":
                return "1 week";
            case "laptop-any":
                return "2 hour";
            default:
                break;
        }
    }
}

$(function(){
    d.init();
})




