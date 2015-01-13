<?php
/**
 * @file
 * tech_lending.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tech_lending_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function tech_lending_node_info() {
  $items = array(
    'device' => array(
      'name' => t('Device'),
      'base' => 'node_content',
      'description' => t('Devices are individual machines that the Libraries have.  This collection includes the Tech Lending devices.'),
      'has_title' => '1',
      'title_label' => t('Model Name'),
      'help' => t('Give a description of the device that addresses it\'s primary uses and technical capabilities.'),
    ),
    'technology_categories' => array(
      'name' => t('Technology Category'),
      'base' => 'node_content',
      'description' => t('Categories of technology being lent.'),
      'has_title' => '1',
      'title_label' => t('Category Name'),
      'help' => '',
    ),
  );
  return $items;
}
