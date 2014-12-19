<?php
/**
 * @file
 * ncsu_lib_partners.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ncsu_lib_partners_user_default_roles() {
  $roles = array();

  // Exported role: partners editor.
  $roles['partners editor'] = array(
    'name' => 'partners editor',
    'weight' => '9',
  );

  return $roles;
}
