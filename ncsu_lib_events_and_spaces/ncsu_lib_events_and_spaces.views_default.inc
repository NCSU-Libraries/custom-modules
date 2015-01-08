<?php
/**
 * @file
 * ncsu_lib_events_and_spaces.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ncsu_lib_events_and_spaces_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'libraries_events';
  $view->description = '';
  $view->tag = 'Calendar';
  $view->base_table = 'node';
  $view->human_name = 'Libraries Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: When */
  $handler->display->display_options['fields']['field_time']['id'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['label'] = '';
  $handler->display->display_options['fields']['field_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_time']['settings'] = array(
    'format_type' => 'time_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_time']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_time']['delta_offset'] = '0';
  /* Sort criterion: Content: The date this event occurred -  start date (field_event_start) */
  $handler->display->display_options['sorts']['field_event_start_value']['id'] = 'field_event_start_value';
  $handler->display->display_options['sorts']['field_event_start_value']['table'] = 'field_data_field_event_start';
  $handler->display->display_options['sorts']['field_event_start_value']['field'] = 'field_event_start_value';
  /* Sort criterion: Content: When -  start date (field_time) */
  $handler->display->display_options['sorts']['field_time_value']['id'] = 'field_time_value';
  $handler->display->display_options['sorts']['field_time_value']['table'] = 'field_data_field_time';
  $handler->display->display_options['sorts']['field_time_value']['field'] = 'field_time_value';
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'week';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_event_start.field_event_start_value' => 'field_data_field_event_start.field_event_start_value',
    'field_data_field_time.field_time_value' => 'field_data_field_time.field_time_value',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['title_1']['value'] = 'Lab prep';
  $handler->display->display_options['filters']['title_1']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_2']['id'] = 'title_2';
  $handler->display->display_options['filters']['title_2']['table'] = 'node';
  $handler->display->display_options['filters']['title_2']['field'] = 'title';
  $handler->display->display_options['filters']['title_2']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['title_2']['value'] = 'Lab clean';
  $handler->display->display_options['filters']['title_2']['group'] = 1;
  /* Filter criterion: Content: Hill Location Fix (field_hill_location_fix) */
  $handler->display->display_options['filters']['field_hill_location_fix_value']['id'] = 'field_hill_location_fix_value';
  $handler->display->display_options['filters']['field_hill_location_fix_value']['table'] = 'field_data_field_hill_location_fix';
  $handler->display->display_options['filters']['field_hill_location_fix_value']['field'] = 'field_hill_location_fix_value';
  $handler->display->display_options['filters']['field_hill_location_fix_value']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_hill_location_fix_value']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['title']['value'] = 'Seminar prep';
  $handler->display->display_options['filters']['title']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_3']['id'] = 'title_3';
  $handler->display->display_options['filters']['title_3']['table'] = 'node';
  $handler->display->display_options['filters']['title_3']['field'] = 'title';
  $handler->display->display_options['filters']['title_3']['operator'] = 'not';
  $handler->display->display_options['filters']['title_3']['value'] = 'Workshop Prep';
  $handler->display->display_options['filters']['title_3']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_4']['id'] = 'title_4';
  $handler->display->display_options['filters']['title_4']['table'] = 'node';
  $handler->display->display_options['filters']['title_4']['field'] = 'title';
  $handler->display->display_options['filters']['title_4']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['title_4']['value'] = 'HOLD';

  /* Display: Month */
  $handler = $view->new_display('page', 'Month', 'page_1');
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_owner' => 'field_owner',
  );
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['row_options']['colors']['calendar_colors_type'] = array(
    'activity' => '#ffffff',
    'book' => '#ffffff',
    'data_views' => '#ffffff',
    'departments' => '#ffffff',
    'device' => '#ffffff',
    'digital_collection' => '#ffffff',
    'event' => '#ffffff',
    'media_gallery' => '#ffffff',
    'image' => '#ffffff',
    'page' => '#ffffff',
    'partners' => '#ffffff',
    'space' => '#ffffff',
    'story' => '#ffffff',
    'webform' => '#ffffff',
    'video' => '#ffffff',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_event_start.field_event_start_value' => 'field_data_field_event_start.field_event_start_value',
    'field_data_field_time.field_time_value' => 'field_data_field_time.field_time_value',
  );
  $handler->display->display_options['path'] = 'calendar/month';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Week */
  $handler = $view->new_display('page', 'Week', 'page_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'week';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'week';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'calendar/week';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Week';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Day */
  $handler = $view->new_display('page', 'Day', 'page_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'day';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'day';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'day';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_event_start.field_event_start_value' => 'field_data_field_event_start.field_event_start_value',
    'field_data_field_time.field_time_value' => 'field_data_field_time.field_time_value',
  );
  $handler->display->display_options['path'] = 'calendar/day';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Day';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Year */
  $handler = $view->new_display('page', 'Year', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'year';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'year';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: The date this event occurred */
  $handler->display->display_options['fields']['field_event_start']['id'] = 'field_event_start';
  $handler->display->display_options['fields']['field_event_start']['table'] = 'field_data_field_event_start';
  $handler->display->display_options['fields']['field_event_start']['field'] = 'field_event_start';
  $handler->display->display_options['fields']['field_event_start']['label'] = '';
  $handler->display->display_options['fields']['field_event_start']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_start']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_event_start']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_event_start']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_event_start']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'year';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_event_start.field_event_start_value' => 'field_data_field_event_start.field_event_start_value',
    'field_data_field_time.field_time_value' => 'field_data_field_time.field_time_value',
  );
  $handler->display->display_options['path'] = 'calendar/year';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Year';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'mini';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '1';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_event_start.field_event_start_value' => 'field_data_field_event_start.field_event_start_value',
    'field_data_field_time.field_time_value' => 'field_data_field_time.field_time_value',
  );

  /* Display: iCal */
  $handler = $view->new_display('feed', 'iCal', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'date_ical';
  $handler->display->display_options['row_plugin'] = 'date_ical';
  $handler->display->display_options['row_options']['date_field'] = 'field_data_field_event_start.field_event_start_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['add_delta'] = 'yes';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_event_start.field_event_start_value' => 'field_data_field_event_start.field_event_start_value',
  );
  $handler->display->display_options['path'] = 'calendar/ical/%/calendar.ics';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'page_1' => 'page_1',
    'page_2' => 'page_2',
    'page_3' => 'page_3',
    'block_1' => 'block_1',
    'block_2' => 'block_2',
    'default' => 0,
  );

  /* Display: Upcoming */
  $handler = $view->new_display('block', 'Upcoming', 'block_2');
  $handler->display->display_options['display_description'] = 'Upcoming events block';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: The date this event occurred */
  $handler->display->display_options['fields']['field_event_start']['id'] = 'field_event_start';
  $handler->display->display_options['fields']['field_event_start']['table'] = 'field_data_field_event_start';
  $handler->display->display_options['fields']['field_event_start']['field'] = 'field_event_start';
  $handler->display->display_options['fields']['field_event_start']['label'] = '';
  $handler->display->display_options['fields']['field_event_start']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_start']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_event_start']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_event_start']['settings'] = array(
    'format_type' => 'verbose_comma',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_event_start']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_event_start']['delta_offset'] = '0';
  /* Field: Content: When */
  $handler->display->display_options['fields']['field_time']['id'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['label'] = '';
  $handler->display->display_options['fields']['field_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_time']['settings'] = array(
    'format_type' => 'verbose_comma',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_time']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_time']['delta_offset'] = '0';
  /* Field: Content: Owner */
  $handler->display->display_options['fields']['field_owner']['id'] = 'field_owner';
  $handler->display->display_options['fields']['field_owner']['table'] = 'field_data_field_owner';
  $handler->display->display_options['fields']['field_owner']['field'] = 'field_owner';
  $handler->display->display_options['fields']['field_owner']['label'] = 'from adx';
  $handler->display->display_options['fields']['field_owner']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_owner']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_owner']['alter']['text'] = 'yes';
  $handler->display->display_options['fields']['field_owner']['empty'] = 'no';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['group'] = 1;
  $handler->display->display_options['filters']['date_filter']['granularity'] = 'minute';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['add_delta'] = 'yes';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_event_start.field_event_start_value' => 'field_data_field_event_start.field_event_start_value',
    'field_data_field_time.field_time_value' => 'field_data_field_time.field_time_value',
  );

  /* Display: RSS of Campus Events */
  $handler = $view->new_display('feed', 'RSS of Campus Events', 'feed_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'NCSU Libraries Events';
  $handler->display->display_options['display_description'] = 'Being used by BarZ Hunt Tour Mobile App';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['style_options']['description'] = 'An RSS feed of the NCSU Libraries\' featured upcoming events';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['row_options']['item_length'] = 'rss';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: When -  start date (field_time) */
  $handler->display->display_options['sorts']['field_time_value']['id'] = 'field_time_value';
  $handler->display->display_options['sorts']['field_time_value']['table'] = 'field_data_field_time';
  $handler->display->display_options['sorts']['field_time_value']['field'] = 'field_time_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Event Category (field_event_category) */
  $handler->display->display_options['filters']['field_event_category_value']['id'] = 'field_event_category_value';
  $handler->display->display_options['filters']['field_event_category_value']['table'] = 'field_data_field_event_category';
  $handler->display->display_options['filters']['field_event_category_value']['field'] = 'field_event_category_value';
  $handler->display->display_options['filters']['field_event_category_value']['value'] = array(
    'Campus Calendar' => 'Campus Calendar',
  );
  $handler->display->display_options['filters']['field_event_category_value']['group'] = 1;
  $handler->display->display_options['path'] = 'upcomingevents.rss';
  $handler->display->display_options['sitename_title'] = 0;
  $export['libraries_events'] = $view;

  $view = new view();
  $view->name = 'room_finder';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'room finder';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Room Finder';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_building_name_value' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_special_access_value' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 1,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_types_of_spaces_value' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 1,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = '3';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_building_name' => 'field_building_name',
    'field_floor' => 'field_floor',
    'field_room_number' => 'field_room_number',
    'field_capacity' => 'field_capacity',
    'field_space_features' => 'field_space_features',
  );
  $handler->display->display_options['style_options']['default'] = 'field_room_number';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_building_name' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_floor' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_room_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_capacity' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_space_features' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Room Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Building */
  $handler->display->display_options['fields']['field_building_name']['id'] = 'field_building_name';
  $handler->display->display_options['fields']['field_building_name']['table'] = 'field_data_field_building_name';
  $handler->display->display_options['fields']['field_building_name']['field'] = 'field_building_name';
  $handler->display->display_options['fields']['field_building_name']['delta_offset'] = '0';
  /* Field: Content: Floor */
  $handler->display->display_options['fields']['field_floor']['id'] = 'field_floor';
  $handler->display->display_options['fields']['field_floor']['table'] = 'field_data_field_floor';
  $handler->display->display_options['fields']['field_floor']['field'] = 'field_floor';
  $handler->display->display_options['fields']['field_floor']['delta_offset'] = '0';
  /* Field: Content: Location Information */
  $handler->display->display_options['fields']['field_room_number']['id'] = 'field_room_number';
  $handler->display->display_options['fields']['field_room_number']['table'] = 'field_data_field_room_number';
  $handler->display->display_options['fields']['field_room_number']['field'] = 'field_room_number';
  /* Field: Content: Capacity */
  $handler->display->display_options['fields']['field_capacity']['id'] = 'field_capacity';
  $handler->display->display_options['fields']['field_capacity']['table'] = 'field_data_field_capacity';
  $handler->display->display_options['fields']['field_capacity']['field'] = 'field_capacity';
  $handler->display->display_options['fields']['field_capacity']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Space Features */
  $handler->display->display_options['fields']['field_space_features']['id'] = 'field_space_features';
  $handler->display->display_options['fields']['field_space_features']['table'] = 'field_data_field_space_features';
  $handler->display->display_options['fields']['field_space_features']['field'] = 'field_space_features';
  $handler->display->display_options['fields']['field_space_features']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
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
    'space' => 'space',
  );
  /* Filter criterion: Content: Space Features (field_space_features) */
  $handler->display->display_options['filters']['field_space_features_value']['id'] = 'field_space_features_value';
  $handler->display->display_options['filters']['field_space_features_value']['table'] = 'field_data_field_space_features';
  $handler->display->display_options['filters']['field_space_features_value']['field'] = 'field_space_features_value';
  $handler->display->display_options['filters']['field_space_features_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_space_features_value']['expose']['operator_id'] = 'field_space_features_value_op';
  $handler->display->display_options['filters']['field_space_features_value']['expose']['label'] = 'Space feature:';
  $handler->display->display_options['filters']['field_space_features_value']['expose']['operator'] = 'field_space_features_value_op';
  $handler->display->display_options['filters']['field_space_features_value']['expose']['identifier'] = 'field_space_features_value';
  $handler->display->display_options['filters']['field_space_features_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_space_features_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
    10 => 0,
    9 => 0,
    3 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['field_space_features_value']['group_info']['label'] = 'Space Features (field_space_features)';
  $handler->display->display_options['filters']['field_space_features_value']['group_info']['identifier'] = 'field_space_features_value';
  $handler->display->display_options['filters']['field_space_features_value']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_space_features_value']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Content: Private Computer Count (field_private_computer_count) */
  $handler->display->display_options['filters']['field_private_computer_count_value']['id'] = 'field_private_computer_count_value';
  $handler->display->display_options['filters']['field_private_computer_count_value']['table'] = 'field_data_field_private_computer_count';
  $handler->display->display_options['filters']['field_private_computer_count_value']['field'] = 'field_private_computer_count_value';
  $handler->display->display_options['filters']['field_private_computer_count_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_private_computer_count_value']['value']['value'] = '0';
  $handler->display->display_options['filters']['field_private_computer_count_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_private_computer_count_value']['expose']['operator_id'] = 'field_private_computer_count_value_op';
  $handler->display->display_options['filters']['field_private_computer_count_value']['expose']['label'] = 'Private Computer Count (field_private_computer_count)';
  $handler->display->display_options['filters']['field_private_computer_count_value']['expose']['operator'] = 'field_private_computer_count_value_op';
  $handler->display->display_options['filters']['field_private_computer_count_value']['expose']['identifier'] = 'field_private_computer_count_value';
  $handler->display->display_options['filters']['field_private_computer_count_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_private_computer_count_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
    10 => 0,
    9 => 0,
    3 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['field_private_computer_count_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_private_computer_count_value']['group_info']['label'] = 'Has computers:';
  $handler->display->display_options['filters']['field_private_computer_count_value']['group_info']['identifier'] = 'field_private_computer_count_value';
  $handler->display->display_options['filters']['field_private_computer_count_value']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['field_private_computer_count_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Yes',
      'operator' => '>',
      'value' => array(
        'value' => '0',
        'min' => '',
        'max' => '',
      ),
    ),
    2 => array(
      'title' => 'No',
      'operator' => '=',
      'value' => array(
        'value' => '0',
        'min' => '',
        'max' => '',
      ),
    ),
  );
  /* Filter criterion: Content: Capacity (field_capacity) */
  $handler->display->display_options['filters']['field_capacity_value']['id'] = 'field_capacity_value';
  $handler->display->display_options['filters']['field_capacity_value']['table'] = 'field_data_field_capacity';
  $handler->display->display_options['filters']['field_capacity_value']['field'] = 'field_capacity_value';
  $handler->display->display_options['filters']['field_capacity_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_capacity_value']['expose']['operator_id'] = 'field_capacity_value_op';
  $handler->display->display_options['filters']['field_capacity_value']['expose']['label'] = 'Capacity (field_capacity)';
  $handler->display->display_options['filters']['field_capacity_value']['expose']['operator'] = 'field_capacity_value_op';
  $handler->display->display_options['filters']['field_capacity_value']['expose']['identifier'] = 'field_capacity_value';
  $handler->display->display_options['filters']['field_capacity_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_capacity_value']['group_info']['label'] = 'Seating for:';
  $handler->display->display_options['filters']['field_capacity_value']['group_info']['identifier'] = 'field_capacity_value';
  $handler->display->display_options['filters']['field_capacity_value']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['field_capacity_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => '4 or less',
      'operator' => '<=',
      'value' => array(
        'value' => '4',
        'min' => '',
        'max' => '',
      ),
    ),
    2 => array(
      'title' => 'Between 5 and 8',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '5',
        'max' => '8',
      ),
    ),
    3 => array(
      'title' => 'Between 8 and 10',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '8',
        'max' => '10',
      ),
    ),
    4 => array(
      'title' => 'Greater than 11',
      'operator' => '>=',
      'value' => array(
        'value' => '11',
        'min' => '',
        'max' => '',
      ),
    ),
  );
  /* Filter criterion: Content: Special Access (field_special_access) */
  $handler->display->display_options['filters']['field_special_access_value']['id'] = 'field_special_access_value';
  $handler->display->display_options['filters']['field_special_access_value']['table'] = 'field_data_field_special_access';
  $handler->display->display_options['filters']['field_special_access_value']['field'] = 'field_special_access_value';
  $handler->display->display_options['filters']['field_special_access_value']['value'] = array(
    'all' => 'all',
    'Faculty' => 'Faculty',
    'Graduate Student' => 'Graduate Student',
  );
  $handler->display->display_options['filters']['field_special_access_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_special_access_value']['expose']['operator_id'] = 'field_special_access_value_op';
  $handler->display->display_options['filters']['field_special_access_value']['expose']['label'] = 'Access';
  $handler->display->display_options['filters']['field_special_access_value']['expose']['operator'] = 'field_special_access_value_op';
  $handler->display->display_options['filters']['field_special_access_value']['expose']['identifier'] = 'field_special_access_value';
  $handler->display->display_options['filters']['field_special_access_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_special_access_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    16 => 0,
    14 => 0,
    15 => 0,
    12 => 0,
    13 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_special_access_value']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_special_access_value']['group_info']['label'] = 'Special Access (field_special_access)';
  $handler->display->display_options['filters']['field_special_access_value']['group_info']['identifier'] = 'field_special_access_value';
  $handler->display->display_options['filters']['field_special_access_value']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_special_access_value']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_special_access_value']['reduce_duplicates'] = TRUE;

  /* Display: Room Reservations */
  $handler = $view->new_display('page', 'Room Reservations', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Reserve a Room';
  $handler->display->display_options['display_description'] = 'Hill and Hunt Reserve a Room';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'clear all';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_building_name_value' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_special_access_value' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 1,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => 'Select All|All
Faculty|Faculty use only
Graduate Student|Graduate Student use only',
        ),
      ),
    ),
    'field_types_of_spaces_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 1,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = '3';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'field_building_name' => 'field_building_name',
    'field_floor' => 'field_floor',
    'path' => 'path',
    'field_capacity' => 'field_capacity',
    'field_request_form_url' => 'field_request_form_url',
    'field_image' => 'field_image',
    'title' => 'title',
    'field_types_of_spaces_1' => 'title',
    'field_reservation_method' => 'title',
    'body' => 'body',
    'field_special_access' => 'field_special_access',
    'field_types_of_spaces' => 'field_types_of_spaces',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_building_name' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_floor' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_capacity' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_request_form_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_types_of_spaces_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reservation_method' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_special_access' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_types_of_spaces' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'my current reservations';
  $handler->display->display_options['header']['area']['content'] = '<a class="current-reservations" href="/roomreservations">View my current reservations</a>';
  $handler->display->display_options['header']['area']['format'] = '3';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results found, clear your filters.';
  $handler->display->display_options['empty']['area']['format'] = '2';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Building */
  $handler->display->display_options['fields']['field_building_name']['id'] = 'field_building_name';
  $handler->display->display_options['fields']['field_building_name']['table'] = 'field_data_field_building_name';
  $handler->display->display_options['fields']['field_building_name']['field'] = 'field_building_name';
  $handler->display->display_options['fields']['field_building_name']['label'] = '';
  $handler->display->display_options['fields']['field_building_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_building_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_building_name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_building_name']['delta_offset'] = '0';
  /* Field: Content: Floor */
  $handler->display->display_options['fields']['field_floor']['id'] = 'field_floor';
  $handler->display->display_options['fields']['field_floor']['table'] = 'field_data_field_floor';
  $handler->display->display_options['fields']['field_floor']['field'] = 'field_floor';
  $handler->display->display_options['fields']['field_floor']['label'] = '';
  $handler->display->display_options['fields']['field_floor']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_floor']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_floor']['delta_offset'] = '0';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Capacity */
  $handler->display->display_options['fields']['field_capacity']['id'] = 'field_capacity';
  $handler->display->display_options['fields']['field_capacity']['table'] = 'field_data_field_capacity';
  $handler->display->display_options['fields']['field_capacity']['field'] = 'field_capacity';
  $handler->display->display_options['fields']['field_capacity']['label'] = '';
  $handler->display->display_options['fields']['field_capacity']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_capacity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_capacity']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_capacity']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Reservation Request Form URL */
  $handler->display->display_options['fields']['field_request_form_url']['id'] = 'field_request_form_url';
  $handler->display->display_options['fields']['field_request_form_url']['table'] = 'field_data_field_request_form_url';
  $handler->display->display_options['fields']['field_request_form_url']['field'] = 'field_request_form_url';
  $handler->display->display_options['fields']['field_request_form_url']['label'] = '';
  $handler->display->display_options['fields']['field_request_form_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_request_form_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_request_form_url']['click_sort_column'] = 'url';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'artbox',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span class="room-name"><a href="[path]">[title]</a></span>
<span class="capacity">Seats: <strong>[field_capacity]</strong></span>
<span class="building-name">[field_building_name] </span>
<span class="floor">[field_floor]</span>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Space type */
  $handler->display->display_options['fields']['field_types_of_spaces_1']['id'] = 'field_types_of_spaces_1';
  $handler->display->display_options['fields']['field_types_of_spaces_1']['table'] = 'field_data_field_types_of_spaces';
  $handler->display->display_options['fields']['field_types_of_spaces_1']['field'] = 'field_types_of_spaces';
  $handler->display->display_options['fields']['field_types_of_spaces_1']['label'] = '';
  $handler->display->display_options['fields']['field_types_of_spaces_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_types_of_spaces_1']['delta_offset'] = '0';
  /* Field: Content: Reservation Method */
  $handler->display->display_options['fields']['field_reservation_method']['id'] = 'field_reservation_method';
  $handler->display->display_options['fields']['field_reservation_method']['table'] = 'field_data_field_reservation_method';
  $handler->display->display_options['fields']['field_reservation_method']['field'] = 'field_reservation_method';
  $handler->display->display_options['fields']['field_reservation_method']['label'] = '';
  $handler->display->display_options['fields']['field_reservation_method']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_reservation_method']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_reservation_method']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_method']['element_default_classes'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '[body] </br>
Capacity: <em>[field_capacity]</em>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Special Access */
  $handler->display->display_options['fields']['field_special_access']['id'] = 'field_special_access';
  $handler->display->display_options['fields']['field_special_access']['table'] = 'field_data_field_special_access';
  $handler->display->display_options['fields']['field_special_access']['field'] = 'field_special_access';
  $handler->display->display_options['fields']['field_special_access']['label'] = '';
  $handler->display->display_options['fields']['field_special_access']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_special_access']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_special_access']['delta_offset'] = '0';
  /* Field: Content: Space type */
  $handler->display->display_options['fields']['field_types_of_spaces']['id'] = 'field_types_of_spaces';
  $handler->display->display_options['fields']['field_types_of_spaces']['table'] = 'field_data_field_types_of_spaces';
  $handler->display->display_options['fields']['field_types_of_spaces']['field'] = 'field_types_of_spaces';
  $handler->display->display_options['fields']['field_types_of_spaces']['label'] = '';
  $handler->display->display_options['fields']['field_types_of_spaces']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_types_of_spaces']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_types_of_spaces']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_types_of_spaces']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_types_of_spaces']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_types_of_spaces']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_types_of_spaces']['settings'] = array(
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  $handler->display->display_options['fields']['field_types_of_spaces']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_types_of_spaces']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Sorting Weight (field_sort) */
  $handler->display->display_options['sorts']['field_sort_value']['id'] = 'field_sort_value';
  $handler->display->display_options['sorts']['field_sort_value']['table'] = 'field_data_field_sort';
  $handler->display->display_options['sorts']['field_sort_value']['field'] = 'field_sort_value';
  $handler->display->display_options['sorts']['field_sort_value']['group_type'] = 'count_distinct';
  $handler->display->display_options['sorts']['field_sort_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'space' => 'space',
  );
  /* Filter criterion: Content: Building (field_building_name) */
  $handler->display->display_options['filters']['field_building_name_value']['id'] = 'field_building_name_value';
  $handler->display->display_options['filters']['field_building_name_value']['table'] = 'field_data_field_building_name';
  $handler->display->display_options['filters']['field_building_name_value']['field'] = 'field_building_name_value';
  $handler->display->display_options['filters']['field_building_name_value']['value'] = array(
    'hill' => 'hill',
    'hunt' => 'hunt',
  );
  $handler->display->display_options['filters']['field_building_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_building_name_value']['expose']['operator_id'] = 'field_building_name_value_op';
  $handler->display->display_options['filters']['field_building_name_value']['expose']['label'] = 'Library:';
  $handler->display->display_options['filters']['field_building_name_value']['expose']['operator'] = 'field_building_name_value_op';
  $handler->display->display_options['filters']['field_building_name_value']['expose']['identifier'] = 'field_building_name_value';
  $handler->display->display_options['filters']['field_building_name_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_building_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    16 => 0,
    14 => 0,
    15 => 0,
    12 => 0,
    13 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_building_name_value']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_building_name_value']['group_info']['label'] = 'Building (field_building_name)';
  $handler->display->display_options['filters']['field_building_name_value']['group_info']['identifier'] = 'field_building_name_value';
  $handler->display->display_options['filters']['field_building_name_value']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_building_name_value']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_building_name_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Special Access (field_special_access) */
  $handler->display->display_options['filters']['field_special_access_value']['id'] = 'field_special_access_value';
  $handler->display->display_options['filters']['field_special_access_value']['table'] = 'field_data_field_special_access';
  $handler->display->display_options['filters']['field_special_access_value']['field'] = 'field_special_access_value';
  $handler->display->display_options['filters']['field_special_access_value']['value'] = array(
    'Faculty' => 'Faculty',
    'Graduate Student' => 'Graduate Student',
  );
  $handler->display->display_options['filters']['field_special_access_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_special_access_value']['expose']['operator_id'] = 'field_special_access_value_op';
  $handler->display->display_options['filters']['field_special_access_value']['expose']['label'] = 'Show rooms for:';
  $handler->display->display_options['filters']['field_special_access_value']['expose']['operator'] = 'field_special_access_value_op';
  $handler->display->display_options['filters']['field_special_access_value']['expose']['identifier'] = 'field_special_access_value';
  $handler->display->display_options['filters']['field_special_access_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_special_access_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    16 => 0,
    14 => 0,
    15 => 0,
    12 => 0,
    13 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_special_access_value']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_special_access_value']['group_info']['label'] = 'Special Access (field_special_access)';
  $handler->display->display_options['filters']['field_special_access_value']['group_info']['identifier'] = 'field_special_access_value';
  $handler->display->display_options['filters']['field_special_access_value']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_special_access_value']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_special_access_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Reservation Method (field_reservation_method) */
  $handler->display->display_options['filters']['field_reservation_method_value']['id'] = 'field_reservation_method_value';
  $handler->display->display_options['filters']['field_reservation_method_value']['table'] = 'field_data_field_reservation_method';
  $handler->display->display_options['filters']['field_reservation_method_value']['field'] = 'field_reservation_method_value';
  $handler->display->display_options['filters']['field_reservation_method_value']['value'] = array(
    'By Room Reservation System' => 'By Room Reservation System',
    'By Mediated Email Form' => 'By Mediated Email Form',
  );
  $handler->display->display_options['filters']['field_reservation_method_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Space type (field_types_of_spaces) */
  $handler->display->display_options['filters']['field_types_of_spaces_value']['id'] = 'field_types_of_spaces_value';
  $handler->display->display_options['filters']['field_types_of_spaces_value']['table'] = 'field_data_field_types_of_spaces';
  $handler->display->display_options['filters']['field_types_of_spaces_value']['field'] = 'field_types_of_spaces_value';
  $handler->display->display_options['filters']['field_types_of_spaces_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_types_of_spaces_value']['expose']['operator_id'] = 'field_types_of_spaces_value_op';
  $handler->display->display_options['filters']['field_types_of_spaces_value']['expose']['label'] = 'Space type';
  $handler->display->display_options['filters']['field_types_of_spaces_value']['expose']['operator'] = 'field_types_of_spaces_value_op';
  $handler->display->display_options['filters']['field_types_of_spaces_value']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['field_types_of_spaces_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    16 => 0,
    14 => 0,
    15 => 0,
    12 => 0,
    13 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'reservearoom';

  /* Display: Data Visualizaton spaces */
  $handler = $view->new_display('block', 'Data Visualizaton spaces', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Visualization Spaces';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="row">
<div class="columns medium-12">
[field_image]
<h4><a href="[path]">[title]</a></h4>
</div>

</div>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Sorting Weight (field_sort) */
  $handler->display->display_options['sorts']['field_sort_value']['id'] = 'field_sort_value';
  $handler->display->display_options['sorts']['field_sort_value']['table'] = 'field_data_field_sort';
  $handler->display->display_options['sorts']['field_sort_value']['field'] = 'field_sort_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'space' => 'space',
  );
  /* Filter criterion: Content: Activity Group (field_activity_group) */
  $handler->display->display_options['filters']['field_activity_group_tid']['id'] = 'field_activity_group_tid';
  $handler->display->display_options['filters']['field_activity_group_tid']['table'] = 'field_data_field_activity_group';
  $handler->display->display_options['filters']['field_activity_group_tid']['field'] = 'field_activity_group_tid';
  $handler->display->display_options['filters']['field_activity_group_tid']['value'] = array(
    191 => '191',
  );
  $handler->display->display_options['filters']['field_activity_group_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_activity_group_tid']['vocabulary'] = 'services';

  /* Display: Research Services spaces */
  $handler = $view->new_display('block', 'Research Services spaces', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Research Spaces';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'small-block-grid-2 medium-block-grid-2';
  $handler->display->display_options['style_options']['wrapper_class'] = 'item-list user-activity-rooms';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['empty'] = '<img src="http://placehold.it/480x261">';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'large',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'space' => 'space',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid_4']['id'] = 'nid_4';
  $handler->display->display_options['filters']['nid_4']['table'] = 'node';
  $handler->display->display_options['filters']['nid_4']['field'] = 'nid';
  $handler->display->display_options['filters']['nid_4']['value']['value'] = '27298';
  $handler->display->display_options['filters']['nid_4']['group'] = 2;
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid_3']['id'] = 'nid_3';
  $handler->display->display_options['filters']['nid_3']['table'] = 'node';
  $handler->display->display_options['filters']['nid_3']['field'] = 'nid';
  $handler->display->display_options['filters']['nid_3']['value']['value'] = '27287';
  $handler->display->display_options['filters']['nid_3']['group'] = 2;
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid_2']['id'] = 'nid_2';
  $handler->display->display_options['filters']['nid_2']['table'] = 'node';
  $handler->display->display_options['filters']['nid_2']['field'] = 'nid';
  $handler->display->display_options['filters']['nid_2']['value']['value'] = '27297';
  $handler->display->display_options['filters']['nid_2']['group'] = 2;
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['value']['value'] = '22559';
  $handler->display->display_options['filters']['nid']['group'] = 2;
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['filters']['nid_1']['table'] = 'node';
  $handler->display->display_options['filters']['nid_1']['field'] = 'nid';
  $handler->display->display_options['filters']['nid_1']['value']['value'] = '27296';
  $handler->display->display_options['filters']['nid_1']['group'] = 2;
  $export['room_finder'] = $view;

  $view = new view();
  $view->name = 'slideshows';
  $view->description = 'Generates a slideshow of images';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'slideshows';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['items_per_page'] = 0;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['node_image']['id'] = 'node_image';
  $handler->display->display_options['fields']['node_image']['table'] = 'field_data_node_image';
  $handler->display->display_options['fields']['node_image']['field'] = 'node_image';
  $handler->display->display_options['fields']['node_image']['label'] = '';
  $handler->display->display_options['fields']['node_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['node_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['node_image']['group_column'] = 'fid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'image' => 'image',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Fellows Program */
  $handler = $view->new_display('block', 'Fellows Program', 'block_1');
  $handler->display->display_options['display_description'] = 'Slideshow on the Fellows Program home page';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'image' => 'image',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name']['value'] = 'Fellows artbox';

  /* Display: Marvin J. Malecha exhibit */
  $handler = $view->new_display('block', 'Marvin J. Malecha exhibit', 'block_2');
  $handler->display->display_options['display_description'] = 'Slideshow on the Marvin J. Malecha exhibit home page';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
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
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name']['value'] = 'Homepage slideshow';
  $handler->display->display_options['filters']['name']['group'] = 1;
  $handler->display->display_options['filters']['name']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'image' => 'image',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Digital Collections */
  $handler = $view->new_display('block', 'Digital Collections', 'block_3');
  $handler->display->display_options['display_description'] = 'Slideshow on the Digital Collections home page';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name']['value'] = 'Digital Collections Homepage Artbox';
  $handler->display->display_options['filters']['name']['group'] = 1;
  $handler->display->display_options['filters']['name']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'image' => 'image',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Hunt Library */
  $handler = $view->new_display('block', 'Hunt Library', 'block_4');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['display_description'] = 'Slideshow on the Hunt home page';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'orbit-slider-old inline-list';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['node_image']['id'] = 'node_image';
  $handler->display->display_options['fields']['node_image']['table'] = 'field_data_node_image';
  $handler->display->display_options['fields']['node_image']['field'] = 'node_image';
  $handler->display->display_options['fields']['node_image']['label'] = '';
  $handler->display->display_options['fields']['node_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['node_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['node_image']['settings'] = array(
    'image_style' => 'hunt-homepage-rotater',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['node_image']['group_column'] = 'fid';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'image' => 'image',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name']['value'] = 'Hunt artbox';

  /* Display: Hunt Sustainability */
  $handler = $view->new_display('block', 'Hunt Sustainability', 'block_5');
  $handler->display->display_options['display_description'] = 'Slideshow on the Hunt Sustainability page';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'node_image' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'node_image' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'image' => 'image',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name']['value'] = 'Hunt Sustainability';

  /* Display: SCRC */
  $handler = $view->new_display('page', 'SCRC', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['hide_on_single_slide'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'node_image' => 0,
    'title' => 0,
    'body' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'node_image' => 0,
    'title' => 0,
    'body' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['hide_on_single_slide'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '15000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['node_image']['id'] = 'node_image';
  $handler->display->display_options['fields']['node_image']['table'] = 'field_data_node_image';
  $handler->display->display_options['fields']['node_image']['field'] = 'node_image';
  $handler->display->display_options['fields']['node_image']['label'] = '';
  $handler->display->display_options['fields']['node_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node_image']['element_wrapper_class'] = 'grid-11 g11-5 alpha';
  $handler->display->display_options['fields']['node_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['node_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'read more';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '/node/[nid]';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
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
    'image' => 'image',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '112',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'vocabulary_4';
  $handler->display->display_options['path'] = '1scrc';
  $export['slideshows'] = $view;

  $view = new view();
  $view->name = 'upcoming_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Upcoming Events';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'body' => 'body',
    'field_category' => 'field_category',
    'field_event_start' => 'field_event_start',
    'field_location' => 'field_location',
    'field_organization' => 'field_organization',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '29';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  /* Field: Content: The date this event occurred */
  $handler->display->display_options['fields']['field_event_start']['id'] = 'field_event_start';
  $handler->display->display_options['fields']['field_event_start']['table'] = 'field_data_field_event_start';
  $handler->display->display_options['fields']['field_event_start']['field'] = 'field_event_start';
  $handler->display->display_options['fields']['field_event_start']['label'] = 'event start';
  $handler->display->display_options['fields']['field_event_start']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Organization */
  $handler->display->display_options['fields']['field_organization']['id'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['table'] = 'field_data_field_organization';
  $handler->display->display_options['fields']['field_organization']['field'] = 'field_organization';
  /* Field: Content: Where */
  $handler->display->display_options['fields']['field_space']['id'] = 'field_space';
  $handler->display->display_options['fields']['field_space']['table'] = 'field_data_field_space';
  $handler->display->display_options['fields']['field_space']['field'] = 'field_space';
  $handler->display->display_options['fields']['field_space']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_space']['delta_offset'] = '0';
  /* Field: Content: Building */
  $handler->display->display_options['fields']['field_building_name']['id'] = 'field_building_name';
  $handler->display->display_options['fields']['field_building_name']['table'] = 'field_data_field_building_name';
  $handler->display->display_options['fields']['field_building_name']['field'] = 'field_building_name';
  $handler->display->display_options['fields']['field_building_name']['relationship'] = 'field_space_target_id';
  $handler->display->display_options['fields']['field_building_name']['delta_offset'] = '0';
  /* Sort criterion: Content: The date this event occurred -  start date (field_event_start) */
  $handler->display->display_options['sorts']['field_event_start_value']['id'] = 'field_event_start_value';
  $handler->display->display_options['sorts']['field_event_start_value']['table'] = 'field_data_field_event_start';
  $handler->display->display_options['sorts']['field_event_start_value']['field'] = 'field_event_start_value';
  /* Contextual filter: Content: Where (field_space) */
  $handler->display->display_options['arguments']['field_space_target_id']['id'] = 'field_space_target_id';
  $handler->display->display_options['arguments']['field_space_target_id']['table'] = 'field_data_field_space';
  $handler->display->display_options['arguments']['field_space_target_id']['field'] = 'field_space_target_id';
  $handler->display->display_options['arguments']['field_space_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_space_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_space_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_space_target_id']['summary_options']['items_per_page'] = '25';
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
    'event' => 'event',
  );
  /* Filter criterion: Content: The date this event occurred -  start date (field_event_start) */
  $handler->display->display_options['filters']['field_event_start_value']['id'] = 'field_event_start_value';
  $handler->display->display_options['filters']['field_event_start_value']['table'] = 'field_data_field_event_start';
  $handler->display->display_options['filters']['field_event_start_value']['field'] = 'field_event_start_value';
  $handler->display->display_options['filters']['field_event_start_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_event_start_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_event_start_value']['year_range'] = '-0:+0';

  /* Display: Primary Event List */
  $handler = $view->new_display('block', 'Primary Event List', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '3';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no scheduled events at this time, please check the <a href="/calendar">calendar</a> for any classes or meetings.';
  $handler->display->display_options['empty']['area']['format'] = '2';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image for Event */
  $handler->display->display_options['fields']['field_image_for_event']['id'] = 'field_image_for_event';
  $handler->display->display_options['fields']['field_image_for_event']['table'] = 'field_data_field_image_for_event';
  $handler->display->display_options['fields']['field_image_for_event']['field'] = 'field_image_for_event';
  $handler->display->display_options['fields']['field_image_for_event']['label'] = '';
  $handler->display->display_options['fields']['field_image_for_event']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_for_event']['element_wrapper_class'] = 'image-outline';
  $handler->display->display_options['fields']['field_image_for_event']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image_for_event']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_for_event']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '29';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: date */
  $handler->display->display_options['fields']['field_time_1']['id'] = 'field_time_1';
  $handler->display->display_options['fields']['field_time_1']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time_1']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time_1']['ui_name'] = 'date';
  $handler->display->display_options['fields']['field_time_1']['label'] = '';
  $handler->display->display_options['fields']['field_time_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_1']['settings'] = array(
    'format_type' => 'month_and_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_time_1']['delta_offset'] = '0';
  /* Field: Content: When */
  $handler->display->display_options['fields']['field_time']['id'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['label'] = '';
  $handler->display->display_options['fields']['field_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time']['settings'] = array(
    'format_type' => 'time_only',
    'fromto' => 'both',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_time']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_time']['delta_offset'] = '0';
  /* Field: Content: Where */
  $handler->display->display_options['fields']['field_space']['id'] = 'field_space';
  $handler->display->display_options['fields']['field_space']['table'] = 'field_data_field_space';
  $handler->display->display_options['fields']['field_space']['field'] = 'field_space';
  $handler->display->display_options['fields']['field_space']['label'] = '';
  $handler->display->display_options['fields']['field_space']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_space']['alter']['text'] = 'At the [field_space]';
  $handler->display->display_options['fields']['field_space']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_space']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_space']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: When -  start date (field_time) */
  $handler->display->display_options['sorts']['field_time_value']['id'] = 'field_time_value';
  $handler->display->display_options['sorts']['field_time_value']['table'] = 'field_data_field_time';
  $handler->display->display_options['sorts']['field_time_value']['field'] = 'field_time_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: When - end date (field_time:value2) */
  $handler->display->display_options['filters']['field_time_value2']['id'] = 'field_time_value2';
  $handler->display->display_options['filters']['field_time_value2']['table'] = 'field_data_field_time';
  $handler->display->display_options['filters']['field_time_value2']['field'] = 'field_time_value2';
  $handler->display->display_options['filters']['field_time_value2']['operator'] = '>';
  $handler->display->display_options['filters']['field_time_value2']['group'] = 1;
  $handler->display->display_options['filters']['field_time_value2']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_time_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Promoted (field_promoted) */
  $handler->display->display_options['filters']['field_promoted_value']['id'] = 'field_promoted_value';
  $handler->display->display_options['filters']['field_promoted_value']['table'] = 'field_data_field_promoted';
  $handler->display->display_options['filters']['field_promoted_value']['field'] = 'field_promoted_value';
  $handler->display->display_options['filters']['field_promoted_value']['value'] = array(
    1 => '1',
  );

  /* Display: 5 Upcoming Hunt Events */
  $handler = $view->new_display('block', '5 Upcoming Hunt Events', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming Events';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['display_description'] = '5 Upcoming events at Hunt Library';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'see all events';
  $handler->display->display_options['footer']['area']['content'] = '<a class="styled" href="/upcomingevents">See more events</a>';
  $handler->display->display_options['footer']['area']['format'] = '2';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No events';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>No events are scheduled at this time. Please see all of the rest of the <a href="/upcomingevents">NCSU Libraries\' events</a>.</p>';
  $handler->display->display_options['empty']['area']['format'] = '3';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_space_target_id']['id'] = 'field_space_target_id';
  $handler->display->display_options['relationships']['field_space_target_id']['table'] = 'field_data_field_space';
  $handler->display->display_options['relationships']['field_space_target_id']['field'] = 'field_space_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '25';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: When */
  $handler->display->display_options['fields']['field_time']['id'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['label'] = '';
  $handler->display->display_options['fields']['field_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_time']['settings'] = array(
    'format_type' => 'verbose',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_time']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: When -  start date (field_time) */
  $handler->display->display_options['sorts']['field_time_value']['id'] = 'field_time_value';
  $handler->display->display_options['sorts']['field_time_value']['table'] = 'field_data_field_time';
  $handler->display->display_options['sorts']['field_time_value']['field'] = 'field_time_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'event' => 'event',
  );
  /* Filter criterion: Content: Building (field_building_name) */
  $handler->display->display_options['filters']['field_building_name_value']['id'] = 'field_building_name_value';
  $handler->display->display_options['filters']['field_building_name_value']['table'] = 'field_data_field_building_name';
  $handler->display->display_options['filters']['field_building_name_value']['field'] = 'field_building_name_value';
  $handler->display->display_options['filters']['field_building_name_value']['relationship'] = 'field_space_target_id';
  $handler->display->display_options['filters']['field_building_name_value']['value'] = array(
    'hunt' => 'hunt',
  );
  /* Filter criterion: Content: Event Category (field_event_category) */
  $handler->display->display_options['filters']['field_event_category_value']['id'] = 'field_event_category_value';
  $handler->display->display_options['filters']['field_event_category_value']['table'] = 'field_data_field_event_category';
  $handler->display->display_options['filters']['field_event_category_value']['field'] = 'field_event_category_value';
  $handler->display->display_options['filters']['field_event_category_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_event_category_value']['value'] = array(
    'External' => 'External',
  );
  /* Filter criterion: Content: When -  start date (field_time) */
  $handler->display->display_options['filters']['field_time_value']['id'] = 'field_time_value';
  $handler->display->display_options['filters']['field_time_value']['table'] = 'field_data_field_time';
  $handler->display->display_options['filters']['field_time_value']['field'] = 'field_time_value';
  $handler->display->display_options['filters']['field_time_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_time_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_time_value']['default_date'] = 'now';

  /* Display: Classes Event List */
  $handler = $view->new_display('block', 'Classes Event List', 'block_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '3';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_time_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '29';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: When */
  $handler->display->display_options['fields']['field_time']['id'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['label'] = '';
  $handler->display->display_options['fields']['field_time']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time']['settings'] = array(
    'format_type' => 'time_only',
    'fromto' => 'both',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_time']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_time']['delta_offset'] = '0';
  /* Field: Content: Building */
  $handler->display->display_options['fields']['field_building_name']['id'] = 'field_building_name';
  $handler->display->display_options['fields']['field_building_name']['table'] = 'field_data_field_building_name';
  $handler->display->display_options['fields']['field_building_name']['field'] = 'field_building_name';
  $handler->display->display_options['fields']['field_building_name']['relationship'] = 'field_space_target_id';
  $handler->display->display_options['fields']['field_building_name']['label'] = '';
  $handler->display->display_options['fields']['field_building_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_building_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_building_name']['delta_offset'] = '0';
  /* Field: Content: Where */
  $handler->display->display_options['fields']['field_space']['id'] = 'field_space';
  $handler->display->display_options['fields']['field_space']['table'] = 'field_data_field_space';
  $handler->display->display_options['fields']['field_space']['field'] = 'field_space';
  $handler->display->display_options['fields']['field_space']['label'] = '';
  $handler->display->display_options['fields']['field_space']['alter']['text'] = 'The [field_space] at the [field_building_name]';
  $handler->display->display_options['fields']['field_space']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_space']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_space']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_space']['delta_offset'] = '0';
  /* Field: Content: When */
  $handler->display->display_options['fields']['field_time_1']['id'] = 'field_time_1';
  $handler->display->display_options['fields']['field_time_1']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time_1']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time_1']['label'] = '';
  $handler->display->display_options['fields']['field_time_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_time_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_time_1']['settings'] = array(
    'format_type' => 'month_and_day',
    'fromto' => 'value',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_time_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_time_1']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: When -  start date (field_time) */
  $handler->display->display_options['sorts']['field_time_value']['id'] = 'field_time_value';
  $handler->display->display_options['sorts']['field_time_value']['table'] = 'field_data_field_time';
  $handler->display->display_options['sorts']['field_time_value']['field'] = 'field_time_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Event Category (field_event_category) */
  $handler->display->display_options['filters']['field_event_category_value']['id'] = 'field_event_category_value';
  $handler->display->display_options['filters']['field_event_category_value']['table'] = 'field_data_field_event_category';
  $handler->display->display_options['filters']['field_event_category_value']['field'] = 'field_event_category_value';
  $handler->display->display_options['filters']['field_event_category_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_event_category_value']['value'] = array(
    'Activities' => 'Activities',
    'Amazing Alumni Series' => 'Amazing Alumni Series',
    'Book Discussion Series' => 'Book Discussion Series',
    'Booksale' => 'Booksale',
    'Campus Calendar' => 'Campus Calendar',
    'Exam Breaks' => 'Exam Breaks',
    'Exhibits' => 'Exhibits',
    'External' => 'External',
    'Fabulous Faculty Series' => 'Fabulous Faculty Series',
    'Films' => 'Films',
    'Friends of the Library' => 'Friends of the Library',
    'Lectures & Seminars' => 'Lectures & Seminars',
    'Meetings' => 'Meetings',
    'Orientation' => 'Orientation',
    'Special Events' => 'Special Events',
  );
  $handler->display->display_options['filters']['field_event_category_value']['group'] = 1;
  $handler->display->display_options['filters']['field_event_category_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: When - end date (field_time:value2) */
  $handler->display->display_options['filters']['field_time_value2']['id'] = 'field_time_value2';
  $handler->display->display_options['filters']['field_time_value2']['table'] = 'field_data_field_time';
  $handler->display->display_options['filters']['field_time_value2']['field'] = 'field_time_value2';
  $handler->display->display_options['filters']['field_time_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_time_value2']['group'] = 1;
  $handler->display->display_options['filters']['field_time_value2']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_time_value2']['default_date'] = 'now';
  $export['upcoming_events'] = $view;

  return $export;
}
