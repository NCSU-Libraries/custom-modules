<?php
/**
 * @file
 * capture_and_promote.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function capture_and_promote_user_default_permissions() {
  $permissions = array();

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
      2 => 'personnel',
      3 => 'website admin',
    ),
    'module' => 'user',
  );

  // Exported permission: moderate content from draft to needs_review.
  $permissions['moderate content from draft to needs_review'] = array(
    'name' => 'moderate content from draft to needs_review',
    'roles' => array(
      0 => 'moderator',
      1 => 'website admin',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from draft to published.
  $permissions['moderate content from draft to published'] = array(
    'name' => 'moderate content from draft to published',
    'roles' => array(
      0 => 'moderator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from needs_review to draft.
  $permissions['moderate content from needs_review to draft'] = array(
    'name' => 'moderate content from needs_review to draft',
    'roles' => array(
      0 => 'moderator',
      1 => 'website admin',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from needs_review to published.
  $permissions['moderate content from needs_review to published'] = array(
    'name' => 'moderate content from needs_review to published',
    'roles' => array(
      0 => 'moderator',
      1 => 'website admin',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from published to draft.
  $permissions['moderate content from published to draft'] = array(
    'name' => 'moderate content from published to draft',
    'roles' => array(
      0 => 'moderator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from published to needs_review.
  $permissions['moderate content from published to needs_review'] = array(
    'name' => 'moderate content from published to needs_review',
    'roles' => array(
      0 => 'moderator',
    ),
    'module' => 'workbench_moderation',
  );

  return $permissions;
}
