<?php

/**
 * @file
 * ca_testimonials.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ca_testimonials_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
  if ($module == "weight" && $api == "weight") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ca_testimonials_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ca_testimonials_node_info() {
  $items = array(
    'ca_testimonial' => array(
      'name' => t('Testimonial'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_weight_features_default_settings().
 */
function ca_testimonials_weight_features_default_settings() {
  $settings = array();

  $settings['ca_testimonial'] = array(
    'enabled' => 1,
    'range' => 100,
    'menu_weight' => 0,
    'default' => -100,
    'sync_translations' => 0,
  );

  return $settings;
}
