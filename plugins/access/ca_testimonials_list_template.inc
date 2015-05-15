<?php

/**
 * @file
 * Plugin to provide access control based upon ca_testimonials admin settings.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('Testimonial: list type'),
  'description' => t('Control access by testimonials list type.'),
  'callback' => 'ca_testimonials_list_template_access_check',
  'settings form' => 'ca_testimonials_list_template_access_settings',
  'settings form submit' => 'ca_testimonials_list_template_access_settings_submit',
  'summary' => 'ca_testimonials_list_template_access_summary',
);

/**
 * Settings form for the 'by testimonials list type' access plugin.
 */
function ca_testimonials_list_template_access_settings($form, &$form_state, $conf) {
  $form['settings']['ca_testimonials_list_template'] = array(
    '#type' => 'select',
    '#title' => t('Testimonial\'s list template'),
    '#options' => array(
      'ca_testimonials_list_template_one' => t('Template one'),
      'ca_testimonials_worx_aurora_one' => t('Worx Aurora template one'),
    ),
    '#required' => TRUE,
    '#default_value' => $conf['ca_testimonials_list_template'],
  );

  return $form;
}

/**
 * Settings form submission.
 */
function ca_testimonials_list_template_access_settings_form($form, &$form_state) {
}

/**
 * Check for access.
 */
function ca_testimonials_list_template_access_check($conf, $context) {
  return $conf['ca_testimonials_list_template'] == variable_get('ca_testimonials_list_template', 'ca_testimonials_worx_aurora_one');
}

/**
 * Provide a summary description based upon the checked testimonials list type.
 */
function ca_testimonials_list_template_access_summary($conf, $context) {
  switch ($conf['ca_testimonials_list_template']) {
    case 'ca_testimonials_list_template_one':
      $template = t('Template one');
      break;
    case 'ca_testimonials_worx_aurora_one':
      $template = t('Worx Aurora template one');
      break;
  }

  return t('Display template is set to: ' . $template);
}
