<?php
/**
 * @file
 * ncsu_lib_partners.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function ncsu_lib_partners_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'one_time_donor_names';
  $feeds_importer->config = array(
    'name' => 'one time - donor names',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 0,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 1,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '23',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => '0',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => '1',
            'target' => 'field_sorting_name',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => '2',
            'target' => 'field_donation_amount',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => '2',
        'skip_hash_check' => 0,
        'bundle' => 'partners',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['one_time_donor_names'] = $feeds_importer;

  return $export;
}
