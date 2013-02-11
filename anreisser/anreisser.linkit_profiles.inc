<?php
/**
 * @file
 * anreisser.linkit_profiles.inc
 */

/**
 * Implements hook_default_linkit_profiles().
 */
function anreisser_default_linkit_profiles() {
  $export = array();

  $linkit_profile = new stdClass();
  $linkit_profile->disabled = FALSE; /* Edit this to true to make a default linkit_profile disabled initially */
  $linkit_profile->api_version = 1;
  $linkit_profile->name = 'standard';
  $linkit_profile->admin_title = 'Standard';
  $linkit_profile->data = array(
    'plugins' => array(
      'entity:node' => array(
        'weight' => '0',
        'enabled' => 1,
      ),
      'entity:taxonomy_term' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
      'entity:user' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
    ),
    'entity:node' => array(
      'result_description' => '',
      'bundles' => array(
        'mit_mahlgrad' => 'mit_mahlgrad',
        'ohne_mahlgrad' => 'ohne_mahlgrad',
        'page' => 'page',
        'frontpage_teaser' => 0,
        'article' => 0,
        'standorte' => 0,
      ),
      'group_by_bundle' => 1,
      'include_unpublished' => 0,
    ),
    'entity:taxonomy_term' => array(
      'result_description' => '',
      'bundles' => array(
        'tags' => 0,
        'geschmacksrichtungen' => 0,
        'staerke' => 0,
        'zubereitungsarten' => 0,
        'kategorien' => 0,
        'gewicht' => 0,
        'mahlgrad' => 0,
        'produktkategorie' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:user' => array(
      'result_description' => '',
    ),
    'autocomplete' => array(
      'charLimit' => 3,
      'wait' => 350,
      'remoteTimeout' => 10000,
    ),
    'attributes' => array(
      'rel' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
      'class' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
      'accesskey' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
      'id' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
      'title' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
    ),
  );
  $linkit_profile->role_rids = array(
    2 => 1,
    3 => 1,
  );
  $linkit_profile->weight = 0;
  $export['standard'] = $linkit_profile;

  return $export;
}
