<?php

/**
 * @file
 * The Sirsi Parser module.
 *
 * Sirsi Parser lets you grab availability data from the SirsiDynix's web
 * service.
 *
 * @ingroup sirsi_parser
 */


/**
 * Implements hook_menu
 */
function sirsi_parser_menu() {
  $items['config/sirsi/import'] = array(
  'title' => 'Sirsi Sparrow',
  'description' => 'Sirsi Sparrow lets you grab availability data from the SirsiDynix\'s web service.',
  'page callback' => 'drupal_get_form',
  'access callback' => TRUE,
  'file' => 'sirsi_parser.admin.inc',
  'type' => MENU_LOCAL_TASK
  );