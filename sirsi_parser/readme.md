Sirsi Parser lets you grab availability data from the SirsiDynix's web service.

## Requirements

* wget, see https://www.gnu.org/software/wget/
* Tech Lending Feature module at github.ncsu.edu/ncsu-libraries/tech_lending.
* Create the directory "/sites/default/files/techlending/devices_data" and make sure Apache can write to that directory.

## How does it work?

* This module grabs data based on the item's "CATKEY" which is the Sirsi unique identifier for items in the catalog
* Data is brought in via a cron job at an interval of your choosing.
* Data is filtered via XML parsing libraries in PHP, converted to JSON and stored on the file system by CATKEY identifier.
* Data is displayed per item via Handlebars template and AJAX requests for data based on CATKEY of the item.
* All variations of item location, item lending period and item availability are displayed, grouped by item location.
* Aggregate details are also available for tablets and laptops per item location.
* More queries could be added to get other results based on different themes or facets.

## Example content

* Try 2081286 as a catkey for the Apple MacBook node
* Full implementation can be seen at http://www.lib.ncsu.edu/techlending