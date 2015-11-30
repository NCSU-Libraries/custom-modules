<?php
/**
 * @file
 * events_service.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function events_service_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'web_services_calendar';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'web services calendar';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Events Feed';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit any partners content';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_space_target_id']['id'] = 'field_space_target_id';
  $handler->display->display_options['relationships']['field_space_target_id']['table'] = 'field_data_field_space';
  $handler->display->display_options['relationships']['field_space_target_id']['field'] = 'field_space_target_id';
  $handler->display->display_options['relationships']['field_space_target_id']['label'] = 'where';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Sorting Name */
  $handler->display->display_options['fields']['field_sorting_name']['id'] = 'field_sorting_name';
  $handler->display->display_options['fields']['field_sorting_name']['table'] = 'field_data_field_sorting_name';
  $handler->display->display_options['fields']['field_sorting_name']['field'] = 'field_sorting_name';
  $handler->display->display_options['fields']['field_sorting_name']['label'] = 'sorting_name';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_image']['label'] = 'image';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'services';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  $handler->display->display_options['fields']['field_image']['group_column'] = 'entity_id';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['group_type'] = 'sum';
  $handler->display->display_options['fields']['body']['label'] = 'description';
  $handler->display->display_options['fields']['body']['type'] = 'services';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  $handler->display->display_options['fields']['body']['group_column'] = 'entity_id';
  /* Field: Content: Powered By */
  $handler->display->display_options['fields']['field_powered_by']['id'] = 'field_powered_by';
  $handler->display->display_options['fields']['field_powered_by']['table'] = 'field_data_field_powered_by';
  $handler->display->display_options['fields']['field_powered_by']['field'] = 'field_powered_by';
  $handler->display->display_options['fields']['field_powered_by']['label'] = 'powered_by';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_donation_amount']['id'] = 'field_donation_amount';
  $handler->display->display_options['fields']['field_donation_amount']['table'] = 'field_data_field_donation_amount';
  $handler->display->display_options['fields']['field_donation_amount']['field'] = 'field_donation_amount';
  $handler->display->display_options['fields']['field_donation_amount']['label'] = 'donation_amount';
  /* Sort criterion: Content: Sorting Name (field_sorting_name) */
  $handler->display->display_options['sorts']['field_sorting_name_value']['id'] = 'field_sorting_name_value';
  $handler->display->display_options['sorts']['field_sorting_name_value']['table'] = 'field_data_field_sorting_name';
  $handler->display->display_options['sorts']['field_sorting_name_value']['field'] = 'field_sorting_name_value';
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
    'partners' => 'partners',
  );
  /* Filter criterion: Content: Sorting Name (field_sorting_name) */
  $handler->display->display_options['filters']['field_sorting_name_value']['id'] = 'field_sorting_name_value';
  $handler->display->display_options['filters']['field_sorting_name_value']['table'] = 'field_data_field_sorting_name';
  $handler->display->display_options['filters']['field_sorting_name_value']['field'] = 'field_sorting_name_value';
  $handler->display->display_options['filters']['field_sorting_name_value']['operator'] = 'starts';
  $handler->display->display_options['filters']['field_sorting_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sorting_name_value']['expose']['operator_id'] = 'field_sorting_name_value_op';
  $handler->display->display_options['filters']['field_sorting_name_value']['expose']['label'] = 'Sorting Name (field_sorting_name)';
  $handler->display->display_options['filters']['field_sorting_name_value']['expose']['operator'] = 'field_sorting_name_value_op';
  $handler->display->display_options['filters']['field_sorting_name_value']['expose']['identifier'] = 'field_sorting_name_value';
  $handler->display->display_options['filters']['field_sorting_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
    10 => 0,
    9 => 0,
    3 => 0,
    11 => 0,
    12 => 0,
  );

  /* Display: Events Feed */
  $handler = $view->new_display('services', 'Events Feed', 'services_2');
  $handler->display->display_options['display_description'] = 'Created to be used with the rest_nodes web service endpoint: see /rest-nodes/feed-events.json';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'event_title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Where */
  $handler->display->display_options['fields']['field_space']['id'] = 'field_space';
  $handler->display->display_options['fields']['field_space']['table'] = 'field_data_field_space';
  $handler->display->display_options['fields']['field_space']['field'] = 'field_space';
  $handler->display->display_options['fields']['field_space']['label'] = 'room';
  $handler->display->display_options['fields']['field_space']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_space']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_space']['delta_offset'] = '0';
  /* Field: Content: Building */
  $handler->display->display_options['fields']['field_building_name']['id'] = 'field_building_name';
  $handler->display->display_options['fields']['field_building_name']['table'] = 'field_data_field_building_name';
  $handler->display->display_options['fields']['field_building_name']['field'] = 'field_building_name';
  $handler->display->display_options['fields']['field_building_name']['relationship'] = 'field_space_target_id';
  $handler->display->display_options['fields']['field_building_name']['label'] = 'building';
  $handler->display->display_options['fields']['field_building_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_building_name']['delta_offset'] = '0';
  /* Field: Content: Room Number */
  $handler->display->display_options['fields']['field_room_number']['id'] = 'field_room_number';
  $handler->display->display_options['fields']['field_room_number']['table'] = 'field_data_field_room_number';
  $handler->display->display_options['fields']['field_room_number']['field'] = 'field_room_number';
  $handler->display->display_options['fields']['field_room_number']['relationship'] = 'field_space_target_id';
  $handler->display->display_options['fields']['field_room_number']['label'] = 'room_number';
  $handler->display->display_options['fields']['field_room_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_room_number']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['group_type'] = 'sum';
  $handler->display->display_options['fields']['body']['label'] = 'description';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  $handler->display->display_options['fields']['body']['group_column'] = 'entity_id';
  /* Field: Content: When */
  $handler->display->display_options['fields']['field_time']['id'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['label'] = 'when';
  $handler->display->display_options['fields']['field_time']['alter']['text'] = '[field_time-value]';
  $handler->display->display_options['fields']['field_time']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_time']['type'] = 'services';
  $handler->display->display_options['fields']['field_time']['settings'] = array(
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  $handler->display->display_options['fields']['field_time']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_time']['delta_offset'] = '0';
  /* Field: Content: Contact Email */
  $handler->display->display_options['fields']['field_contact_email']['id'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['table'] = 'field_data_field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['field'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['label'] = 'contact_mail';
  $handler->display->display_options['fields']['field_contact_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_email']['type'] = 'email_plain';
  $handler->display->display_options['fields']['field_contact_email']['settings'] = array(
    'skip_safe' => 0,
    'skip_empty_values' => 1,
  );
  /* Field: Content: Contact Name */
  $handler->display->display_options['fields']['field_contact_name']['id'] = 'field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['table'] = 'field_data_field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['field'] = 'field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['label'] = 'contact_name';
  $handler->display->display_options['fields']['field_contact_name']['element_label_colon'] = FALSE;
  /* Field: Content: Contact Phone */
  $handler->display->display_options['fields']['field_contact_phone']['id'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['table'] = 'field_data_field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['field'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['label'] = 'contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_phone']['hide_empty'] = TRUE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = 'image_space';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'services';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'skip_safe' => 0,
    'skip_empty_values' => 1,
  );
  /* Field: Content: Image for Event */
  $handler->display->display_options['fields']['field_image_for_event']['id'] = 'field_image_for_event';
  $handler->display->display_options['fields']['field_image_for_event']['table'] = 'field_data_field_image_for_event';
  $handler->display->display_options['fields']['field_image_for_event']['field'] = 'field_image_for_event';
  $handler->display->display_options['fields']['field_image_for_event']['label'] = 'image_event';
  $handler->display->display_options['fields']['field_image_for_event']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_for_event']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_for_event']['type'] = 'services';
  $handler->display->display_options['fields']['field_image_for_event']['settings'] = array(
    'skip_safe' => 0,
    'skip_empty_values' => 1,
  );
  /* Field: Content: Event Category */
  $handler->display->display_options['fields']['field_event_category']['id'] = 'field_event_category';
  $handler->display->display_options['fields']['field_event_category']['table'] = 'field_data_field_event_category';
  $handler->display->display_options['fields']['field_event_category']['field'] = 'field_event_category';
  $handler->display->display_options['fields']['field_event_category']['label'] = 'categories';
  $handler->display->display_options['fields']['field_event_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_category']['delta_offset'] = '0';
  /* Field: Content: Event URL */
  $handler->display->display_options['fields']['field_event_url']['id'] = 'field_event_url';
  $handler->display->display_options['fields']['field_event_url']['table'] = 'field_data_field_event_url';
  $handler->display->display_options['fields']['field_event_url']['field'] = 'field_event_url';
  $handler->display->display_options['fields']['field_event_url']['label'] = 'external_url';
  $handler->display->display_options['fields']['field_event_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_url']['click_sort_column'] = 'url';
  /* Field: Content: Promoted */
  $handler->display->display_options['fields']['field_promoted']['id'] = 'field_promoted';
  $handler->display->display_options['fields']['field_promoted']['table'] = 'field_data_field_promoted';
  $handler->display->display_options['fields']['field_promoted']['field'] = 'field_promoted';
  $handler->display->display_options['fields']['field_promoted']['label'] = 'promoted';
  $handler->display->display_options['fields']['field_promoted']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_promoted']['type'] = 'list_key';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['title']['value'] = 'HOLD';
  $handler->display->display_options['filters']['title']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['title_1']['value'] = 'Lab clean';
  $handler->display->display_options['filters']['title_1']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_2']['id'] = 'title_2';
  $handler->display->display_options['filters']['title_2']['table'] = 'node';
  $handler->display->display_options['filters']['title_2']['field'] = 'title';
  $handler->display->display_options['filters']['title_2']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['title_2']['value'] = 'Lab prep';
  $handler->display->display_options['filters']['title_2']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_3']['id'] = 'title_3';
  $handler->display->display_options['filters']['title_3']['table'] = 'node';
  $handler->display->display_options['filters']['title_3']['field'] = 'title';
  $handler->display->display_options['filters']['title_3']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['title_3']['value'] = 'Seminar prep';
  $handler->display->display_options['filters']['title_3']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_4']['id'] = 'title_4';
  $handler->display->display_options['filters']['title_4']['table'] = 'node';
  $handler->display->display_options['filters']['title_4']['field'] = 'title';
  $handler->display->display_options['filters']['title_4']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['title_4']['value'] = 'Workshop prep';
  $handler->display->display_options['filters']['title_4']['group'] = 1;
  /* Filter criterion: Content: Building (field_building_name) */
  $handler->display->display_options['filters']['field_building_name_value']['id'] = 'field_building_name_value';
  $handler->display->display_options['filters']['field_building_name_value']['table'] = 'field_data_field_building_name';
  $handler->display->display_options['filters']['field_building_name_value']['field'] = 'field_building_name_value';
  $handler->display->display_options['filters']['field_building_name_value']['relationship'] = 'field_space_target_id';
  $handler->display->display_options['filters']['field_building_name_value']['value'] = array(
    'hill' => 'hill',
    'hunt' => 'hunt',
    'design' => 'design',
    'nrl' => 'nrl',
    'vetmed' => 'vetmed',
    'cvm' => 'cvm',
  );
  $handler->display->display_options['filters']['field_building_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_building_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_building_name_value']['expose']['operator_id'] = 'field_building_name_value_op';
  $handler->display->display_options['filters']['field_building_name_value']['expose']['label'] = 'building';
  $handler->display->display_options['filters']['field_building_name_value']['expose']['operator'] = 'field_building_name_value_op';
  $handler->display->display_options['filters']['field_building_name_value']['expose']['identifier'] = 'building';
  $handler->display->display_options['filters']['field_building_name_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_building_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
    10 => 0,
    3 => 0,
    11 => 0,
    12 => 0,
  );
  /* Filter criterion: Date not null */
  $handler->display->display_options['filters']['field_time_value']['id'] = 'field_time_value';
  $handler->display->display_options['filters']['field_time_value']['table'] = 'field_data_field_time';
  $handler->display->display_options['filters']['field_time_value']['field'] = 'field_time_value';
  $handler->display->display_options['filters']['field_time_value']['ui_name'] = 'Date not null';
  $handler->display->display_options['filters']['field_time_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_time_value']['group'] = 1;
  /* Filter criterion: Content: When - end date (field_time:value2) */
  $handler->display->display_options['filters']['field_time_value2']['id'] = 'field_time_value2';
  $handler->display->display_options['filters']['field_time_value2']['table'] = 'field_data_field_time';
  $handler->display->display_options['filters']['field_time_value2']['field'] = 'field_time_value2';
  $handler->display->display_options['filters']['field_time_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_time_value2']['group'] = 2;
  $handler->display->display_options['filters']['field_time_value2']['expose']['operator_id'] = 'field_time_value2_op';
  $handler->display->display_options['filters']['field_time_value2']['expose']['label'] = 'When - end date (field_time:value2)';
  $handler->display->display_options['filters']['field_time_value2']['expose']['operator'] = 'field_time_value2_op';
  $handler->display->display_options['filters']['field_time_value2']['expose']['identifier'] = 'ends_before';
  $handler->display->display_options['filters']['field_time_value2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
    10 => 0,
    3 => 0,
    11 => 0,
    12 => 0,
  );
  $handler->display->display_options['filters']['field_time_value2']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_time_value2']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_time_value2']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_time_value2']['year_range'] = '-0:+1';
  /* Filter criterion: Content: When - end date (field_time:value2) */
  $handler->display->display_options['filters']['field_time_value2_1']['id'] = 'field_time_value2_1';
  $handler->display->display_options['filters']['field_time_value2_1']['table'] = 'field_data_field_time';
  $handler->display->display_options['filters']['field_time_value2_1']['field'] = 'field_time_value2';
  $handler->display->display_options['filters']['field_time_value2_1']['operator'] = '<=';
  $handler->display->display_options['filters']['field_time_value2_1']['group'] = 2;
  $handler->display->display_options['filters']['field_time_value2_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_time_value2_1']['expose']['operator_id'] = 'field_time_value2_1_op';
  $handler->display->display_options['filters']['field_time_value2_1']['expose']['label'] = 'When - end date (field_time:value2)';
  $handler->display->display_options['filters']['field_time_value2_1']['expose']['operator'] = 'field_time_value2_1_op';
  $handler->display->display_options['filters']['field_time_value2_1']['expose']['identifier'] = 'before';
  $handler->display->display_options['filters']['field_time_value2_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
    10 => 0,
    3 => 0,
    11 => 0,
    12 => 0,
  );
  $handler->display->display_options['filters']['field_time_value2_1']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_time_value2_1']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_time_value2_1']['default_date'] = 'now +2 week';
  $handler->display->display_options['filters']['field_time_value2_1']['year_range'] = '-0:+1';
  $handler->display->display_options['path'] = 'feed-events';
  $export['web_services_calendar'] = $view;

  return $export;
}
