<?php
/**
 * @file
 * viu_testimonial.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function viu_testimonial_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_oa_access|node|testimonial|form';
  $field_group->group_name = 'group_oa_access';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'testimonial';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Access',
    'weight' => '8',
    'children' => array(
      0 => 'oa_other_spaces_ref',
      1 => 'oa_section_ref',
      2 => 'og_group_ref',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Access',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_oa_access|node|testimonial|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Access');

  return $field_groups;
}
