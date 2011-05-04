<?php
/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t("CA: Staff node templates"),
  'description' => t('Control access by Staff node template settings.'),
  'callback' => 'ca_staff_node_template_access_check',
  'settings form' => 'ca_staff_node_template_access_settings',
  'settings form submit' => 'ca_staff_node_template_access_settings_submit',
  'summary' => 'ca_staff_node_template_access_summary',
);

/**
 * Settings form for the 'CA: Staff node templates' access plugin ca_staff_node_template_access_settings.
 */
function ca_staff_node_template_access_settings(&$form, &$form_state, $conf) {
  $form['settings']['ca_staff_node_template'] = array(
    '#type' => 'select',
    '#title' => t('Staff\'s Node Template'),
    '#options' => array(
      'ca_staff_node_template_one' => t('Template One'),
      'ca_staff_node_template_two' => t('Template Two'),
      'ca_staff_node_template_three' => t('Template Three'),
    ),
    '#required' => TRUE,
    '#default_value' => $conf['ca_staff_node_template'],
  );
  return $form;
}

/**
 * Compress the node_types allowed to the minimum.
 */
function ca_staff_node_template_access_settings_submit(&$form, &$form_state) {
}

/**
 * Check for access.
 */
function ca_staff_node_template_access_check($conf, $context) {
  return $conf['ca_staff_node_template'] == variable_get('ca_staff_node_template', 'ca_staff_node_template_one');
}

/**
 * Provide a summary description based upon the checked node_types.
 */
function ca_staff_node_template_access_summary($conf, $context) {
  if ($conf['ca_staff_node_template'] == 'ca_staff_node_template_one') {
    $template = t('Template One');
  }
  elseif ($conf['ca_staff_node_template'] == 'ca_staff_node_template_two') {
    $template = t('Template Two');
  }
  else {
    $template = t('Template Three');
  }
  return t('Display template is set to: ' . $template);
}