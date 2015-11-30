<?php
/**
 * @file
 * ncsu_lib_partners.services.inc
 */

/**
 * Implements hook_default_services_endpoint().
 */
function ncsu_lib_partners_default_services_endpoint() {
  $export = array();

  $endpoint = new stdClass();
  $endpoint->disabled = FALSE; /* Edit this to true to make a default endpoint disabled initially */
  $endpoint->api_version = 3;
  $endpoint->name = 'rest_partners';
  $endpoint->server = 'rest_server';
  $endpoint->path = 'rest-partners';
  $endpoint->authentication = array(
    'services' => 'services',
  );
  $endpoint->server_settings = array(
    'formatters' => array(
      'json' => TRUE,
      'jsonp' => TRUE,
      'xml' => TRUE,
      'bencode' => FALSE,
      'php' => FALSE,
      'rss' => FALSE,
    ),
    'parsers' => array(
      'application/json' => TRUE,
      'application/x-www-form-urlencoded' => TRUE,
      'application/vnd.php.serialized' => FALSE,
      'application/xml' => FALSE,
      'multipart/form-data' => FALSE,
      'text/xml' => FALSE,
    ),
  );
  $endpoint->resources = array(
    'system' => array(
      'actions' => array(
        'connect' => array(
          'enabled' => '1',
        ),
      ),
    ),
    'user' => array(
      'actions' => array(
        'login' => array(
          'enabled' => '1',
        ),
        'logout' => array(
          'enabled' => '1',
          'settings' => array(
            'services' => array(
              'resource_api_version' => '1.0',
            ),
          ),
        ),
      ),
    ),
    'views' => array(
      'operations' => array(
        'retrieve' => array(
          'enabled' => '1',
        ),
      ),
    ),
    'feed' => array(
      'operations' => array(
        'index' => array(
          'enabled' => '1',
        ),
      ),
    ),
  );
  $endpoint->debug = 0;
  $export['rest_partners'] = $endpoint;

  return $export;
}
