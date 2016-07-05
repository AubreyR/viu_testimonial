<?php
/**
 * @file
 * viu_testimonial.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function viu_testimonial_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create testimonial content'.
  $permissions['create testimonial content'] = array(
    'name' => 'create testimonial content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any testimonial content'.
  $permissions['delete any testimonial content'] = array(
    'name' => 'delete any testimonial content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own testimonial content'.
  $permissions['delete own testimonial content'] = array(
    'name' => 'delete own testimonial content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any testimonial content'.
  $permissions['edit any testimonial content'] = array(
    'name' => 'edit any testimonial content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own testimonial content'.
  $permissions['edit own testimonial content'] = array(
    'name' => 'edit own testimonial content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'trash any testimonial content'.
  $permissions['trash any testimonial content'] = array(
    'name' => 'trash any testimonial content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'trash_flag',
  );

  // Exported permission: 'trash own testimonial content'.
  $permissions['trash own testimonial content'] = array(
    'name' => 'trash own testimonial content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'trash_flag',
  );

  // Exported permission: 'untrash any testimonial content'.
  $permissions['untrash any testimonial content'] = array(
    'name' => 'untrash any testimonial content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'trash_flag',
  );

  // Exported permission: 'untrash own testimonial content'.
  $permissions['untrash own testimonial content'] = array(
    'name' => 'untrash own testimonial content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'trash_flag',
  );

  return $permissions;
}
