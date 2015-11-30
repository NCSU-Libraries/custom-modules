<?php
/**
 * @file
 * ncsu_lib_partners.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ncsu_lib_partners_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "services" && $api == "services") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function ncsu_lib_partners_views_api() {
  return array("version" => "3.0");
}
