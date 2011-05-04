<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ca_staff_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function ca_staff_imagecache_default_presets() {
  $items = array(
    'ca_staff_s_scale_200w' => array(
      'presetname' => 'ca_staff_s_scale_200w',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '200',
            'height' => '',
            'upscale' => 0,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function ca_staff_node_info() {
  $items = array(
    'ca_staff' => array(
      'name' => t('Staff'),
      'module' => 'features',
      'description' => t('This content type is used to add staff to the website.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'has_body' => '1',
      'body_label' => t('Bio'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function ca_staff_views_api() {
  return array(
    'api' => '2',
  );
}
