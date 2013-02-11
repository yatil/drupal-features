<?php
/**
 * @file
 * anreisser.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function anreisser_user_default_permissions() {
  $permissions = array();

  // Exported permission: create frontpage_teaser content.
  $permissions['create frontpage_teaser content'] = array(
    'name' => 'create frontpage_teaser content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any frontpage_teaser content.
  $permissions['delete any frontpage_teaser content'] = array(
    'name' => 'delete any frontpage_teaser content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own frontpage_teaser content.
  $permissions['delete own frontpage_teaser content'] = array(
    'name' => 'delete own frontpage_teaser content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any frontpage_teaser content.
  $permissions['edit any frontpage_teaser content'] = array(
    'name' => 'edit any frontpage_teaser content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own frontpage_teaser content.
  $permissions['edit own frontpage_teaser content'] = array(
    'name' => 'edit own frontpage_teaser content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
