<?php
/**
 * @file
 * oplbootstrap_helper.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function oplbootstrap_helper_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'entity_panels_node_event_teaser__panel_context_88db325d-0dc4-494d-8d92-6aacf50a2c21';
  $handler->task = 'entity_panels';
  $handler->subtask = 'node-event-teaser';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Event Default',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
    'style' => 'default',
    'middle' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '56c7f9c6-b7b8-441f-97c5-301c21f77f3e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-18c51983-64d3-40f6-af0f-a5b908bda1c5';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Event Header',
      'title' => '',
      'body' => '<header>Events / <a>Event Category</a></header>',
      'format' => 'full_html_no_editor_',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '18c51983-64d3-40f6-af0f-a5b908bda1c5';
    $display->content['new-18c51983-64d3-40f6-af0f-a5b908bda1c5'] = $pane;
    $display->panels['middle'][0] = 'new-18c51983-64d3-40f6-af0f-a5b908bda1c5';
    $pane = new stdClass();
    $pane->pid = 'new-a8416f66-9dfa-4e38-8e10-cbcee39b7ae5';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image_event';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => '',
        'image_link' => '',
      ),
      'context' => 'argument_entity_panels_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a8416f66-9dfa-4e38-8e10-cbcee39b7ae5';
    $display->content['new-a8416f66-9dfa-4e38-8e10-cbcee39b7ae5'] = $pane;
    $display->panels['middle'][1] = 'new-a8416f66-9dfa-4e38-8e10-cbcee39b7ae5';
    $pane = new stdClass();
    $pane->pid = 'new-9ddafee5-0cdc-4257-a844-4b41379e1956';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:title_field';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'title_linked',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'title_style' => 'h2',
        'title_link' => 'content',
        'title_class' => '',
      ),
      'context' => 'argument_entity_panels_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '9ddafee5-0cdc-4257-a844-4b41379e1956';
    $display->content['new-9ddafee5-0cdc-4257-a844-4b41379e1956'] = $pane;
    $display->panels['middle'][2] = 'new-9ddafee5-0cdc-4257-a844-4b41379e1956';
    $pane = new stdClass();
    $pane->pid = 'new-3d2371fa-270a-43f6-92c6-e6f8e7fc7898';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Event Branch',
      'title' => '',
      'body' => '<p class="card-location"><span><i class="fa fa-map-marker" aria-hidden="true"</i></span> %node:field_event_branch</p>
',
      'format' => 'full_html_no_editor_',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '3d2371fa-270a-43f6-92c6-e6f8e7fc7898';
    $display->content['new-3d2371fa-270a-43f6-92c6-e6f8e7fc7898'] = $pane;
    $display->panels['middle'][3] = 'new-3d2371fa-270a-43f6-92c6-e6f8e7fc7898';
    $pane = new stdClass();
    $pane->pid = 'new-e2c674a2-af43-41ee-bc45-fcfd42842622';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Event Date and Time',
      'title' => '',
      'body' => '<p class="card-date"><span><i class="fa fa-clock-o" aria-hidden="true"></i></span> %node:field_event_dates</p>
',
      'format' => 'full_html_no_editor_',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'e2c674a2-af43-41ee-bc45-fcfd42842622';
    $display->content['new-e2c674a2-af43-41ee-bc45-fcfd42842622'] = $pane;
    $display->panels['middle'][4] = 'new-e2c674a2-af43-41ee-bc45-fcfd42842622';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-9ddafee5-0cdc-4257-a844-4b41379e1956';
  $handler->conf['display'] = $display;
  $export['entity_panels_node_event_teaser__panel_context_88db325d-0dc4-494d-8d92-6aacf50a2c21'] = $handler;

  return $export;
}
