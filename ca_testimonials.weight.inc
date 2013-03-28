<?php
/**
 * @file
 * ca_testimonials.weight.inc
 */

/**
 * Implements hook_default_weight_settings().
 */
function ca_testimonials_default_weight_settings() {
  $export = array();

  $settings = new stdClass();
  $settings->disabled = FALSE; /* Edit this to true to make a default settings disabled initially */
  $settings->api_version = 1;
  $settings->id = '1';
  $settings->type = 'ca_testimonial';
  $settings->weight_enabled = TRUE;
  $settings->weight_range = TRUE;
  $settings->menu_weight = FALSE;
  $settings->weight_default = FALSE;
  $export['ca_testimonial'] = $settings;

  return $export;
}
