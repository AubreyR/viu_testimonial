<?php
/**
 * @file
 * viu_testimonial.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function viu_testimonial_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'testimonial';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Testimonial';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'What VIU Students are Saying';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field: Primary Image */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'field_data_field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Content: Program */
  $handler->display->display_options['fields']['field_viu_testimonial_program']['id'] = 'field_viu_testimonial_program';
  $handler->display->display_options['fields']['field_viu_testimonial_program']['table'] = 'field_data_field_viu_testimonial_program';
  $handler->display->display_options['fields']['field_viu_testimonial_program']['field'] = 'field_viu_testimonial_program';
  $handler->display->display_options['fields']['field_viu_testimonial_program']['label'] = '';
  $handler->display->display_options['fields']['field_viu_testimonial_program']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_viu_testimonial_program']['element_default_classes'] = FALSE;
  /* Field: Content: Year Graduated */
  $handler->display->display_options['fields']['field_viu_testimonial_year_grad']['id'] = 'field_viu_testimonial_year_grad';
  $handler->display->display_options['fields']['field_viu_testimonial_year_grad']['table'] = 'field_data_field_viu_testimonial_year_grad';
  $handler->display->display_options['fields']['field_viu_testimonial_year_grad']['field'] = 'field_viu_testimonial_year_grad';
  $handler->display->display_options['fields']['field_viu_testimonial_year_grad']['label'] = '';
  $handler->display->display_options['fields']['field_viu_testimonial_year_grad']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_viu_testimonial_year_grad']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_viu_testimonial_year_grad']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_viu_testimonial_year_grad']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Year of Studies */
  $handler->display->display_options['fields']['field_viu_testimonial_year']['id'] = 'field_viu_testimonial_year';
  $handler->display->display_options['fields']['field_viu_testimonial_year']['table'] = 'field_data_field_viu_testimonial_year';
  $handler->display->display_options['fields']['field_viu_testimonial_year']['field'] = 'field_viu_testimonial_year';
  $handler->display->display_options['fields']['field_viu_testimonial_year']['label'] = '';
  $handler->display->display_options['fields']['field_viu_testimonial_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_viu_testimonial_year']['element_default_classes'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'testimonial' => 'testimonial',
  );

  /* Display: Items */
  $handler = $view->new_display('panel_pane', 'Items', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'Shows all testimonials so they can be styled in a variety of ways';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['testimonial'] = $view;

  return $export;
}
