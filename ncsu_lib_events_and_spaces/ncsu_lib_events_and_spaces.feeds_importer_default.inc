<?php
/**
 * @file
 * ncsu_lib_events_and_spaces.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function ncsu_lib_events_and_spaces_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'auditorium_hill';
  $feeds_importer->config = array(
    'name' => 'Auditorium (Hill)',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => 0,
        'use_pubsubhubbub' => 0,
        'designated_hub' => '',
        'request_timeout' => NULL,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'DateiCalFeedsParser',
      'config' => array(
        'indefinite_count' => '52',
        'until_not_utc' => FALSE,
        'skip_days' => NULL,
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
            'source' => 'UID',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'SUMMARY',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'DESCRIPTION',
            'target' => 'body',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'LOCATION',
            'target' => 'field_space:label',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'DTSTART',
            'target' => 'field_time:start',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'DTEND',
            'target' => 'field_time:end',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'RRULE',
            'target' => 'field_time:rrule',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => '3',
        'skip_hash_check' => 0,
        'bundle' => 'event',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '86400',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['auditorium_hill'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'ittc_lab_1a';
  $feeds_importer->config = array(
    'name' => 'ITTC Lab 1A',
    'description' => 'iCal file from Google Calendar',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => 0,
        'use_pubsubhubbub' => 0,
        'designated_hub' => '',
        'request_timeout' => NULL,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'DateiCalFeedsParser',
      'config' => array(
        'indefinite_count' => '52',
        'until_not_utc' => FALSE,
        'skip_days' => NULL,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '0',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'UID',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'SUMMARY',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'DESCRIPTION',
            'target' => 'body',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'LOCATION',
            'target' => 'field_space:label',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'DTSTART',
            'target' => 'field_time:start',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'DTEND',
            'target' => 'field_time:end',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'RRULE',
            'target' => 'field_time:rrule',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => '3',
        'skip_hash_check' => 0,
        'bundle' => 'event',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '86400',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['ittc_lab_1a'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'ittc_lab_1b';
  $feeds_importer->config = array(
    'name' => 'ITTC Lab 1B',
    'description' => 'iCal file from Google Calendar',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => 0,
        'use_pubsubhubbub' => 0,
        'designated_hub' => '',
        'request_timeout' => NULL,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'DateiCalFeedsParser',
      'config' => array(
        'indefinite_count' => '52',
        'until_not_utc' => FALSE,
        'skip_days' => NULL,
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
            'source' => 'UID',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'SUMMARY',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'DESCRIPTION',
            'target' => 'body',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'LOCATION',
            'target' => 'field_space:label',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'DTSTART',
            'target' => 'field_time:start',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'DTEND',
            'target' => 'field_time:end',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'RRULE',
            'target' => 'field_time:rrule',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => '3',
        'skip_hash_check' => 0,
        'bundle' => 'event',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '86400',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['ittc_lab_1b'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'ittc_lab_2';
  $feeds_importer->config = array(
    'name' => 'ITTC Lab 2',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => 0,
        'use_pubsubhubbub' => 0,
        'designated_hub' => '',
        'request_timeout' => NULL,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'DateiCalFeedsParser',
      'config' => array(
        'indefinite_count' => '52',
        'until_not_utc' => FALSE,
        'skip_days' => NULL,
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
            'source' => 'UID',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'SUMMARY',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'DESCRIPTION',
            'target' => 'body',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'LOCATION',
            'target' => 'field_space:label',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'DTSTART',
            'target' => 'field_time:start',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'DTEND',
            'target' => 'field_time:end',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'RRULE',
            'target' => 'field_time:rrule',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => '3',
        'skip_hash_check' => 0,
        'bundle' => 'event',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '86400',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['ittc_lab_2'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'mini_theater';
  $feeds_importer->config = array(
    'name' => 'Mini-theater',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => 0,
        'use_pubsubhubbub' => 0,
        'designated_hub' => '',
        'request_timeout' => NULL,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'DateiCalFeedsParser',
      'config' => array(
        'indefinite_count' => '52',
        'until_not_utc' => FALSE,
        'skip_days' => NULL,
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
            'source' => 'UID',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'SUMMARY',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'DESCRIPTION',
            'target' => 'body',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'LOCATION',
            'target' => 'field_space:label',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'DTSTART',
            'target' => 'field_time:start',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'DTEND',
            'target' => 'field_time:end',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'RRULE',
            'target' => 'field_time:rrule',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => '3',
        'skip_hash_check' => 0,
        'bundle' => 'event',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '86400',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['mini_theater'] = $feeds_importer;

  return $export;
}
