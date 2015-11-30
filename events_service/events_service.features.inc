<?php
/**
 * @file
 * events_service.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function events_service_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "services" && $api == "services") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function events_service_views_api() {
  return array("version" => "3.0");
}
