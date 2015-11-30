<?php
/**
 * Creating blocks with laptop availability for NRL and VetMed branchs
 *
 */

/**
 * Implements hook_block_info().
 *
 * This hook declares what blocks are provided by the module.
 */
function sirsi_parser_block_info() {
  $blocks['nrl_laptops'] = array(
    'info' => t('NRL Laptops')
  );
  $blocks['vetmed_comps'] = array(
    'info' => t('Vetmed Computers')
  );
  return $blocks;
}

/**
 * Implements hook_block_view().
 *
 * This hook generates the contents of the blocks themselves.
 */
function sirsi_parser_block_view($delta = '') {
  //The $delta parameter tells us which block is being requested.
  switch ($delta) {
    case 'nrl_laptops':
      $block['subject'] = t('Laptops available now:');
      $block['content'] = load_tech_data($delta);
      break;
    case 'vetmed_comps':
      $block['subject'] = t('Computers availble:');
      $block['content'] = load_tech_data($delta);
      break;

  }
  return $block;
}

/**
 * Grab content based on the block
 *
 */
function load_tech_data($which_block) {
  // Resources needed for all sirsi_parser blocks

  // Set the root file path for JS included
  $module_path = drupal_get_path('module', 'sirsi_parser');
  // Include JS that contains the writeNumbers() function
  drupal_add_js($module_path . '/js/techdata.js', 'file');
  // Initialize an empty string variable to use the shorthand name of the
  // branch
  $branch = '';

  switch ($which_block) {

    case 'nrl_laptops':
      drupal_add_js($module_path . '/js/nrl.js', 'file');
      return array(
        '#markup' => t('<div class="availability-nrl"></div>')
        );
      break;

    case 'vetmed_comps':
      $branch = 'vetmed';
      drupal_add_js($module_path . '/js/vml.js', 'file');
      return array(
        '#markup' => t('<div class="availability-vml"></div>')
        );
      break;
  }
}