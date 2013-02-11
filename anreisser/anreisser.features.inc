<?php
/**
 * @file
 * anreisser.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function anreisser_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "linkit" && $api == "linkit_profiles") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function anreisser_node_info() {
  $items = array(
    'frontpage_teaser' => array(
      'name' => t('Anreißer'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
