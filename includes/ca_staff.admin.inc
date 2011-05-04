<?php

/**
 * Define the function ca_staff_admin_settings_form().
 */
function ca_staff_admin_settings_form() {
  $form = array();

  $form['staff_list'] = array(
    '#type' => 'select',
    '#title' => t('Staff\'s List Template'),
    '#options' => array(
      'ca_staff_list_template_one' => t('Template One'),
      'ca_staff_list_template_two' => t('Template Two'),
      'ca_staff_list_template_three' => t('Template Three'),
    ),
    '#default_value' => variable_get('ca_staff_list_template', 'ca_staff_list_template_one'),
    '#required' => TRUE,
  );

  $form['staff_node'] = array(
    '#type' => 'select',
    '#title' => t('Staff\'s Node Template'),
    '#options' => array(
      'ca_staff_node_template_one' => t('Template One'),
      'ca_staff_node_template_two' => t('Template Two'),
      'ca_staff_node_template_three' => t('Template Three'),
    ),
    '#default_value' => variable_get('ca_staff_node_template', 'ca_staff_node_template_one'),
    '#required' => TRUE,
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
    '#submit' => array('ca_staff_admin_settings_form_submit'),
  );

  return $form;
}

/**
 * Define the function ca_staff_admin_settings_form_submit().
 */
function ca_staff_admin_settings_form_submit($form, &$form_state) {
  variable_set('ca_staff_list_template', $form_state['values']['staff_list']);
  variable_set('ca_staff_node_template', $form_state['values']['staff_node']);
  drupal_set_message('Configuration has been saved.');
}
