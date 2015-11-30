<?php
/**
 * @file
 * ncsu_lib_partners.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ncsu_lib_partners_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer services.
  $permissions['administer services'] = array(
    'name' => 'administer services',
    'roles' => array(
      0 => 'website admin',
    ),
    'module' => 'services',
  );

  // Exported permission: create partners content.
  $permissions['create partners content'] = array(
    'name' => 'create partners content',
    'roles' => array(
      0 => 'partners editor',
      1 => 'website admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any partners content.
  $permissions['delete any partners content'] = array(
    'name' => 'delete any partners content',
    'roles' => array(
      0 => 'partners editor',
      1 => 'website admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own partners content.
  $permissions['delete own partners content'] = array(
    'name' => 'delete own partners content',
    'roles' => array(
      0 => 'partners editor',
      1 => 'website admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any partners content.
  $permissions['edit any partners content'] = array(
    'name' => 'edit any partners content',
    'roles' => array(
      0 => 'partners editor',
      1 => 'website admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own partners content.
  $permissions['edit own partners content'] = array(
    'name' => 'edit own partners content',
    'roles' => array(
      0 => 'partners editor',
      1 => 'website admin',
    ),
    'module' => 'node',
  );

  // Exported permission: get a system variable.
  $permissions['get a system variable'] = array(
    'name' => 'get a system variable',
    'roles' => array(
      0 => 'website admin',
    ),
    'module' => 'services',
  );

  // Exported permission: get any binary files.
  $permissions['get any binary files'] = array(
    'name' => 'get any binary files',
    'roles' => array(
      0 => 'website admin',
    ),
    'module' => 'services',
  );

  // Exported permission: get own binary files.
  $permissions['get own binary files'] = array(
    'name' => 'get own binary files',
    'roles' => array(
      0 => 'website admin',
    ),
    'module' => 'services',
  );

  // Exported permission: perform unlimited index queries.
  $permissions['perform unlimited index queries'] = array(
    'name' => 'perform unlimited index queries',
    'roles' => array(
      0 => 'website admin',
    ),
    'module' => 'services',
  );

  // Exported permission: save file information.
  $permissions['save file information'] = array(
    'name' => 'save file information',
    'roles' => array(
      0 => 'website admin',
    ),
    'module' => 'services',
  );

  // Exported permission: set a system variable.
  $permissions['set a system variable'] = array(
    'name' => 'set a system variable',
    'roles' => array(
      0 => 'website admin',
    ),
    'module' => 'services',
  );

  return $permissions;
}
