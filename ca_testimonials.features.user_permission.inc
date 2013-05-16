<?php
/**
 * @file
 * ca_testimonials.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ca_testimonials_user_default_permissions() {
  $permissions = array();

  // Exported permission: create ca_testimonial content.
  $permissions['create ca_testimonial content'] = array(
    'name' => 'create ca_testimonial content',
    'roles' => array(
      'administrator => 'administrator',
      'testimonials admin' => 'testimonials admin',
      'testimonial creator' => 'testimonial creator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any ca_testimonial content.
  $permissions['delete any ca_testimonial content'] = array(
    'name' => 'delete any ca_testimonial content',
    'roles' => array(
      'administrator => 'administrator',
      'testimonials admin' => 'testimonials admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own ca_testimonial content.
  $permissions['delete own ca_testimonial content'] = array(
    'name' => 'delete own ca_testimonial content',
    'roles' => array(
      'administrator => 'administrator',
      'testimonials admin' => 'testimonials admin',
      'testimonial creator' => 'testimonial creator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any ca_testimonial content.
  $permissions['edit any ca_testimonial content'] = array(
    'name' => 'edit any ca_testimonial content',
    'roles' => array(
      'administrator => 'administrator',
      'testimonials admin' => 'testimonials admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own ca_testimonial content.
  $permissions['edit own ca_testimonial content'] = array(
    'name' => 'edit own ca_testimonial content',
    'roles' => array(
      'administrator => 'administrator',
      'testimonials admin' => 'testimonials admin',
      'testimonial creator' => 'testimonial creator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  return $permissions;
}
