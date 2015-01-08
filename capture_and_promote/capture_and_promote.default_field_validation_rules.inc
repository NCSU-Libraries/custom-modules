<?php
/**
 * @file
 * capture_and_promote.default_field_validation_rules.inc
 */

/**
 * Implements hook_default_field_validation_rule().
 */
function capture_and_promote_default_field_validation_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'keep to roughly four lines';
  $rule->name = '207_characters';
  $rule->field_name = 'field_four_liner';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'project';
  $rule->validator = 'field_validation_length_validator';
  $rule->settings = array(
    'min' => '',
    'max' => '400',
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      4 => 0,
      16 => 0,
      14 => 0,
      15 => 0,
      12 => 0,
      13 => 0,
      3 => 0,
    ),
    'errors' => 0,
  );
  $rule->error_message = 'The four-liner needs to be less than [max].  Your four-liner is [length].';
  $export['207_characters'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Teaser Length';
  $rule->name = 'teaser_length';
  $rule->field_name = 'field_teaser';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'project';
  $rule->validator = 'field_validation_length_validator';
  $rule->settings = array(
    'min' => '300',
    'max' => '3000',
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      4 => 0,
      16 => 0,
      14 => 0,
      15 => 0,
      12 => 0,
      13 => 0,
      3 => 0,
    ),
    'errors' => 0,
  );
  // $rule->error_message = 'Teasers need to be between [min] and [max].  Your teaser is [length].';
  $export['teaser_length'] = $rule;

  return $export;
}
