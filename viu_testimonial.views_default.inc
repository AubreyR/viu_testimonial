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
  $handler->display->display_options['query']['options']['contextual_filters_or'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
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
  /* Sort criterion: Content: Year of Studies (field_viu_testimonial_year) */
  $handler->display->display_options['sorts']['field_viu_testimonial_year_value']['id'] = 'field_viu_testimonial_year_value';
  $handler->display->display_options['sorts']['field_viu_testimonial_year_value']['table'] = 'field_data_field_viu_testimonial_year';
  $handler->display->display_options['sorts']['field_viu_testimonial_year_value']['field'] = 'field_viu_testimonial_year_value';
  $handler->display->display_options['sorts']['field_viu_testimonial_year_value']['order'] = 'DESC';
  /* Sort criterion: Content: Year Graduated (field_viu_testimonial_year_grad) */
  $handler->display->display_options['sorts']['field_viu_testimonial_year_grad_value']['id'] = 'field_viu_testimonial_year_grad_value';
  $handler->display->display_options['sorts']['field_viu_testimonial_year_grad_value']['table'] = 'field_data_field_viu_testimonial_year_grad';
  $handler->display->display_options['sorts']['field_viu_testimonial_year_grad_value']['field'] = 'field_viu_testimonial_year_grad_value';
  $handler->display->display_options['sorts']['field_viu_testimonial_year_grad_value']['order'] = 'DESC';
  /* Contextual filter: Field: Site (og_group_ref:target_id) */
  $handler->display->display_options['arguments']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_type'] = 'og_context';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Visible in other Spaces (oa_other_spaces_ref:target_id) */
  $handler->display->display_options['arguments']['oa_other_spaces_ref_target_id']['id'] = 'oa_other_spaces_ref_target_id';
  $handler->display->display_options['arguments']['oa_other_spaces_ref_target_id']['table'] = 'field_data_oa_other_spaces_ref';
  $handler->display->display_options['arguments']['oa_other_spaces_ref_target_id']['field'] = 'oa_other_spaces_ref_target_id';
  $handler->display->display_options['arguments']['oa_other_spaces_ref_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['oa_other_spaces_ref_target_id']['default_argument_type'] = 'og_context';
  $handler->display->display_options['arguments']['oa_other_spaces_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['oa_other_spaces_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['oa_other_spaces_ref_target_id']['summary_options']['items_per_page'] = '25';
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

  /* Display: Speech Bubble Carousel (by Year) */
  $handler = $view->new_display('panel_pane', 'Speech Bubble Carousel (by Year)', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'Displays testimonials in a speech bubble carousel, sorted by year in school and date graduated.';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
    'image_style' => 'testimonials_thumb',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
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
  $handler->display->display_options['pane_category']['name'] = 'Testimonials';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['display_description'] = 'Shows all testimonials on a single page with a unique URL';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['row_class'] = 'testimonial-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'field_featured_image' => 'field_featured_image',
    'title' => 'field_featured_image',
    'body' => 'field_featured_image',
    'field_viu_testimonial_program' => 'field_viu_testimonial_program',
    'field_viu_testimonial_year_grad' => 'field_viu_testimonial_year_grad',
    'field_viu_testimonial_year' => 'field_viu_testimonial_year',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_featured_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<hr />',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_viu_testimonial_program' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_viu_testimonial_year_grad' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_viu_testimonial_year' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = FALSE;
  $handler->display->display_options['style_options']['caption'] = 'List of all Testimonials';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'hidden';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Field: Primary Image */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'field_data_field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['label'] = 'Testimonial';
  $handler->display->display_options['fields']['field_featured_image']['alter']['text'] = '[field_featured_image]';
  $handler->display->display_options['fields']['field_featured_image']['element_label_class'] = 'testimonial-first-row';
  $handler->display->display_options['fields']['field_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div id="nid[nid]">[title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '[body]</div>';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Program */
  $handler->display->display_options['fields']['field_viu_testimonial_program']['id'] = 'field_viu_testimonial_program';
  $handler->display->display_options['fields']['field_viu_testimonial_program']['table'] = 'field_data_field_viu_testimonial_program';
  $handler->display->display_options['fields']['field_viu_testimonial_program']['field'] = 'field_viu_testimonial_program';
  $handler->display->display_options['fields']['field_viu_testimonial_program']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_viu_testimonial_program']['element_default_classes'] = FALSE;
  /* Field: Content: Year Graduated */
  $handler->display->display_options['fields']['field_viu_testimonial_year_grad']['id'] = 'field_viu_testimonial_year_grad';
  $handler->display->display_options['fields']['field_viu_testimonial_year_grad']['table'] = 'field_data_field_viu_testimonial_year_grad';
  $handler->display->display_options['fields']['field_viu_testimonial_year_grad']['field'] = 'field_viu_testimonial_year_grad';
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
  $handler->display->display_options['fields']['field_viu_testimonial_year']['label'] = 'Current Year of Studies';
  $handler->display->display_options['fields']['field_viu_testimonial_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_viu_testimonial_year']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['path'] = 'testimonials';

  /* Display: Circular Portrait Carousel (by Year) */
  $handler = $view->new_display('panel_pane', 'Circular Portrait Carousel (by Year)', 'panel_pane_2');
  $handler->display->display_options['display_description'] = 'Displays testimonials in a circular portrait carousel, sorted by year in school and date graduated.';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
    'image_style' => 'testimonials_thumb',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
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
  $handler->display->display_options['pane_category']['name'] = 'Testimonials';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Speech Bubble Carousel (Random) */
  $handler = $view->new_display('panel_pane', 'Speech Bubble Carousel (Random)', 'panel_pane_3');
  $handler->display->display_options['display_description'] = 'Displays testimonials randomly in a speech bubble carousel.';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
    'image_style' => 'testimonials_thumb',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
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
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['pane_category']['name'] = 'Testimonials';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Circular Portrait Carousel (Random) */
  $handler = $view->new_display('panel_pane', 'Circular Portrait Carousel (Random)', 'panel_pane_4');
  $handler->display->display_options['display_description'] = 'Displays testimonials randomly in a circular portrait carousel.';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
    'image_style' => 'testimonials_thumb',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
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
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['pane_category']['name'] = 'Testimonials';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Sidebar Circular Portrait Carousel (Random) */
  $handler = $view->new_display('panel_pane', 'Sidebar Circular Portrait Carousel (Random)', 'panel_pane_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'About Our Students';
  $handler->display->display_options['display_description'] = 'Displays testimonials randomly in a circular portrait carousel.';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
    'image_style' => 'testimonials_thumb',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '190';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '/testimonials#[nid]';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '100',
  );
  /* Field: more anchor link */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'more anchor link';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<a href="/testimonials#nid[nid]">read more</a>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['pane_category']['name'] = 'Testimonials';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['testimonial'] = $view;

  return $export;
}
