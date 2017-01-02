<?php
/**
 * @file
 * oplbootstrap_helper.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function oplbootstrap_helper_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'all_event_hodes_teaser_';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'All event nodes (teaser)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'masonry_views';
  $handler->display->display_options['style_options']['row_class'] = 'card-layout card-events-features';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['masonry_column_width'] = '33%';
  $handler->display->display_options['style_options']['masonry_column_width_units'] = '%';
  $handler->display->display_options['style_options']['masonry_gutter_width'] = '16';
  $handler->display->display_options['style_options']['masonry_resizable'] = TRUE;
  $handler->display->display_options['style_options']['masonry_animated'] = TRUE;
  $handler->display->display_options['style_options']['masonry_fit_width'] = TRUE;
  $handler->display->display_options['style_options']['masonry_rtl'] = FALSE;
  $handler->display->display_options['style_options']['masonry_images_first'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'event-teasers';
  $translatables['all_event_hodes_teaser_'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Page'),
  );
  $export['all_event_hodes_teaser_'] = $view;

  $view = new view();
  $view->name = 'home_page_blog';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_staff_blogs_full';
  $view->human_name = 'Home page Blog';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'masonry';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'item';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Rendered Content */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'teaser';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Field: Indexed Content: The main body text */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'search_api_index_staff_blogs_full';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Sticky in lists */
  $handler->display->display_options['fields']['sticky']['id'] = 'sticky';
  $handler->display->display_options['fields']['sticky']['table'] = 'search_api_index_staff_blogs_full';
  $handler->display->display_options['fields']['sticky']['field'] = 'sticky';
  $handler->display->display_options['fields']['sticky']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sticky']['not'] = 0;
  $handler->display->display_options['fields']['sticky']['link_to_entity'] = 0;
  /* Sort criterion: Indexed Content: Sticky in lists */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'search_api_index_staff_blogs_full';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Indexed Content: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'search_api_index_staff_blogs_full';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Indexed Content: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_staff_blogs_full';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_staff_blogs_full';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search ';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'text';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    15 => 0,
    1 => 0,
    24 => 0,
    12 => 0,
    14 => 0,
    21 => 0,
    26 => 0,
    4 => 0,
    17 => 0,
    27 => 0,
    30 => 0,
    31 => 0,
    33 => 0,
    34 => 0,
    35 => 0,
    36 => 0,
    37 => 0,
    38 => 0,
    39 => 0,
    40 => 0,
  );

  /* Display: Blog pane */
  $handler = $view->new_display('panel_pane', 'Blog pane', 'blog_pane');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['pane_category']['name'] = 'OPL panes';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Canada 150 Blogs */
  $handler = $view->new_display('block', 'Canada 150 Blogs', 'block_1');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Content: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_staff_blogs_full';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Indexed Content: Category */
  $handler->display->display_options['filters']['field_category_1']['id'] = 'field_category_1';
  $handler->display->display_options['filters']['field_category_1']['table'] = 'search_api_index_staff_blogs_full';
  $handler->display->display_options['filters']['field_category_1']['field'] = 'field_category';
  $handler->display->display_options['filters']['field_category_1']['value'] = array(
    1656 => '1656',
  );
  $handler->display->display_options['block_description'] = 'Canada 150 Blogs';
  $translatables['home_page_blog'] = array(
    t('Master'),
    t('more'),
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Sticky in lists'),
    t('Search '),
    t('Blog pane'),
    t('OPL panes'),
    t('Canada 150 Blogs'),
  );
  $export['home_page_blog'] = $view;

  $view = new view();
  $view->name = 'home_page_clone_of_events_and_programs_facets';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_events';
  $view->human_name = 'Home page Clone of Events and Programs facets';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'masonry';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Reset';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '7';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'item';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Rendered Content */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'teaser';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Sort criterion: Indexed Content: Event date */
  $handler->display->display_options['sorts']['search_api_aggregation_2']['id'] = 'search_api_aggregation_2';
  $handler->display->display_options['sorts']['search_api_aggregation_2']['table'] = 'search_api_index_events';
  $handler->display->display_options['sorts']['search_api_aggregation_2']['field'] = 'search_api_aggregation_2';
  /* Sort criterion: Indexed Content: Branch */
  $handler->display->display_options['sorts']['field_event_branch']['id'] = 'field_event_branch';
  $handler->display->display_options['sorts']['field_event_branch']['table'] = 'search_api_index_events';
  $handler->display->display_options['sorts']['field_event_branch']['field'] = 'field_event_branch';
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_events';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  /* Sort criterion: Indexed Content: Entity ID */
  $handler->display->display_options['sorts']['search_api_id']['id'] = 'search_api_id';
  $handler->display->display_options['sorts']['search_api_id']['table'] = 'search_api_index_events';
  $handler->display->display_options['sorts']['search_api_id']['field'] = 'search_api_id';
  $handler->display->display_options['sorts']['search_api_id']['order'] = 'DESC';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_events';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search Programs';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'text';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    15 => 0,
    1 => 0,
    24 => 0,
    12 => 0,
    14 => 0,
    21 => 0,
    26 => 0,
    4 => 0,
    17 => 0,
    27 => 0,
    30 => 0,
    31 => 0,
    33 => 0,
    34 => 0,
    35 => 0,
    36 => 0,
    37 => 0,
    38 => 0,
    39 => 0,
    40 => 0,
  );
  /* Filter criterion: Indexed Content: Event Dates */
  $handler->display->display_options['filters']['field_event_dates']['id'] = 'field_event_dates';
  $handler->display->display_options['filters']['field_event_dates']['table'] = 'search_api_index_events';
  $handler->display->display_options['filters']['field_event_dates']['field'] = 'field_event_dates';
  $handler->display->display_options['filters']['field_event_dates']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_dates']['value'] = 'now - 1 hour';
  $handler->display->display_options['filters']['field_event_dates']['group'] = 1;
  $handler->display->display_options['filters']['field_event_dates']['expose']['operator_id'] = 'field_event_dates_op';
  $handler->display->display_options['filters']['field_event_dates']['expose']['label'] = 'Event Dates';
  $handler->display->display_options['filters']['field_event_dates']['expose']['operator'] = 'field_event_dates_op';
  $handler->display->display_options['filters']['field_event_dates']['expose']['identifier'] = 'field_event_dates';
  $handler->display->display_options['filters']['field_event_dates']['group_info']['label'] = 'Event Dates';
  $handler->display->display_options['filters']['field_event_dates']['group_info']['identifier'] = 'field_event_dates';
  $handler->display->display_options['filters']['field_event_dates']['group_info']['default_group'] = '1';
  $handler->display->display_options['filters']['field_event_dates']['group_info']['group_items'] = array(
    1 => array(
      'title' => '',
      'operator' => '>=',
      'value' => NULL,
    ),
    2 => array(
      'title' => '',
      'operator' => '>=',
      'value' => NULL,
    ),
    3 => array(
      'title' => '',
      'operator' => '>=',
      'value' => NULL,
    ),
  );

  /* Display: Events pane */
  $handler = $view->new_display('panel_pane', 'Events pane', 'events_pane');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['pane_category']['name'] = 'OPL panes';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Facets block */
  $handler = $view->new_display('search_api_views_facets_block', 'Facets block', 'search_api_views_facets_block_1');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $translatables['home_page_clone_of_events_and_programs_facets'] = array(
    t('Master'),
    t('more'),
    t('Search'),
    t('Reset'),
    t('Asc'),
    t('Desc'),
    t('Search Programs'),
    t('Event Dates'),
    t('Events pane'),
    t('OPL panes'),
    t('Facets block'),
  );
  $export['home_page_clone_of_events_and_programs_facets'] = $view;

  return $export;
}
