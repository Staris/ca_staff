<?php

/**
 * Implementation of hook_strongarm().
 */
function ca_staff_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_ca_staff';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '0',
    'revision_information' => '2',
    'author' => '1',
    'options' => '3',
    'menu' => '-1',
    'path' => '4',
    'page_title' => '-4',
  );

  $export['content_extra_weights_ca_staff'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'form_build_id_ca_staff';
  $strongarm->value = 'form-55d3a5050ed72be18f617d1396d2e7ba';

  $export['form_build_id_ca_staff'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ca_staff';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_ca_staff'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_type_ca_staff';
  $strongarm->value = '';

  $export['page_title_type_ca_staff'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_type_ca_staff_showfield';
  $strongarm->value = 1;

  $export['page_title_type_ca_staff_showfield'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ca_staff_pattern';
  $strongarm->value = 'staff/[title-raw]';

  $export['pathauto_node_ca_staff_pattern'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'weight_node_types';
  $strongarm->value = array(
    'ca_staff' => 'ca_staff',
  );

  $export['weight_node_types'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'weight_range';
  $strongarm->value = '90';

  $export['weight_range'] = $strongarm;
  return $export;
}
