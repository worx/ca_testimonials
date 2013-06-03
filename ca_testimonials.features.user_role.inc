<?php
/**
 * @file
 * ca_testimonials.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ca_testimonials_user_default_roles() {
  $roles = array();

  // Exported role: testimonial creator.
  $roles['testimonial creator'] = array(
    'name' => 'testimonial creator',
    'weight' => 6,
    'machine_name' => 'testimonial_creator',
  );

  // Exported role: testimonials admin.
  $roles['testimonials admin'] = array(
    'name' => 'testimonials admin',
    'weight' => 4,
    'machine_name' => 'testimonials admin',
  );

  return $roles;
}
