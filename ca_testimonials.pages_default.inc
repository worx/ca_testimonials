<?php

/**
 * @file
 * ca_testimonials.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ca_testimonials_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'ca_testimonial_node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'CA Testimonials: Node Template One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ca_testimonial' => 'ca_testimonial',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-testimonial-node ca-testimonial-node-template-1',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '629aaee9-e7b1-4bc5-a418-b4f53608c2dc';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'ca_testimonial_node_view_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2849b77c-a875-4f9f-8841-5ca5480a8096';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_testimonial_node-ca_testimonial_node_1a';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2849b77c-a875-4f9f-8841-5ca5480a8096';
  $display->content['new-2849b77c-a875-4f9f-8841-5ca5480a8096'] = $pane;
  $display->panels['middle'][0] = 'new-2849b77c-a875-4f9f-8841-5ca5480a8096';
  $pane = new stdClass();
  $pane->pid = 'new-b2412d27-408f-4992-a0d2-1e65d0842575';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_testimonial_node-ca_testimonial_node_1b';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b2412d27-408f-4992-a0d2-1e65d0842575';
  $display->content['new-b2412d27-408f-4992-a0d2-1e65d0842575'] = $pane;
  $display->panels['middle'][1] = 'new-b2412d27-408f-4992-a0d2-1e65d0842575';
  $pane = new stdClass();
  $pane->pid = 'new-f34a2a24-4d95-4cfd-8b4e-b8495508c920';
  $pane->panel = 'middle';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '<nonce>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = '';
  $pane->uuid = 'f34a2a24-4d95-4cfd-8b4e-b8495508c920';
  $display->content['new-f34a2a24-4d95-4cfd-8b4e-b8495508c920'] = $pane;
  $display->panels['middle'][2] = 'new-f34a2a24-4d95-4cfd-8b4e-b8495508c920';
  $pane = new stdClass();
  $pane->pid = 'new-09986d41-945c-4473-ab03-d281a3e9c267';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_testimonial_node-ca_testimonial_node_client_link';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '09986d41-945c-4473-ab03-d281a3e9c267';
  $display->content['new-09986d41-945c-4473-ab03-d281a3e9c267'] = $pane;
  $display->panels['middle'][3] = 'new-09986d41-945c-4473-ab03-d281a3e9c267';
  $pane = new stdClass();
  $pane->pid = 'new-d0e1cbb0-9e89-493b-8371-c66208bfaeb8';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_testimonial_node-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'd0e1cbb0-9e89-493b-8371-c66208bfaeb8';
  $display->content['new-d0e1cbb0-9e89-493b-8371-c66208bfaeb8'] = $pane;
  $display->panels['middle'][4] = 'new-d0e1cbb0-9e89-493b-8371-c66208bfaeb8';
  $pane = new stdClass();
  $pane->pid = 'new-c7b6a27f-7f80-4f3a-9fed-bf9bb488bbde';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'addtoany-addtoany_button';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'ca-addtoany-feature',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'c7b6a27f-7f80-4f3a-9fed-bf9bb488bbde';
  $display->content['new-c7b6a27f-7f80-4f3a-9fed-bf9bb488bbde'] = $pane;
  $display->panels['middle'][5] = 'new-c7b6a27f-7f80-4f3a-9fed-bf9bb488bbde';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['ca_testimonial_node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_9346b4f2-eb98-4a85-9faf-485bdac80bec';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Testimonials: Node Template One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ca_testimonial' => 'ca_testimonial',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-testimonial-node ca-testimonial-node-template-1',
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'first-first' => NULL,
      'first-second' => NULL,
      'first-third' => NULL,
      'first-fourth' => NULL,
      'first-fifth' => NULL,
      'first-sixth' => NULL,
      'second-first' => NULL,
      'second-second' => NULL,
      'second-third' => NULL,
      'second-fourth' => NULL,
      'second-fifth' => NULL,
      'second-sixth' => NULL,
      'third-first' => NULL,
      'third-second' => NULL,
      'third-third' => NULL,
      'third-fourth' => NULL,
      'third-fifth' => NULL,
      'third-sixth' => NULL,
      'fourth-first' => NULL,
      'fourth-second' => NULL,
      'fourth-third' => NULL,
      'fourth-fourth' => NULL,
      'fourth-fifth' => NULL,
      'fourth-sixth' => NULL,
      'fifth-first' => NULL,
      'fifth-second' => NULL,
      'fifth-third' => NULL,
      'fifth-fourth' => NULL,
      'fifth-fifth' => NULL,
      'fifth-sixth' => NULL,
      'sixth-first' => NULL,
      'sixth-second' => NULL,
      'sixth-third' => NULL,
      'sixth-fourth' => NULL,
      'sixth-fifth' => NULL,
      'sixth-sixth' => NULL,
      'seventh-first' => NULL,
      'seventh-second' => NULL,
      'seventh-third' => NULL,
      'seventh-fourth' => NULL,
      'seventh-fifth' => NULL,
      'seventh-sixth' => NULL,
      'eighth-first' => NULL,
      'eighth-second' => NULL,
      'eighth-third' => NULL,
      'eighth-fourth' => NULL,
      'eighth-fifth' => NULL,
      'eighth-sixth' => NULL,
      'ninth-first' => NULL,
      'ninth-second' => NULL,
      'ninth-third' => NULL,
      'ninth-fourth' => NULL,
      'ninth-fifth' => NULL,
      'ninth-sixth' => NULL,
      'tenth-first' => NULL,
      'tenth-second' => NULL,
      'tenth-third' => NULL,
      'tenth-fourth' => NULL,
      'tenth-fifth' => NULL,
      'tenth-sixth' => NULL,
      'eleventh-first' => NULL,
      'eleventh-second' => NULL,
      'eleventh-third' => NULL,
      'eleventh-fourth' => NULL,
      'eleventh-fifth' => NULL,
      'eleventh-sixth' => NULL,
      'twelfth-first' => NULL,
      'twelfth-second' => NULL,
      'twelfth-third' => NULL,
      'twelfth-fourth' => NULL,
      'twelfth-fifth' => NULL,
      'twelfth-sixth' => NULL,
      'thirteenth-first' => NULL,
      'thirteenth-second' => NULL,
      'thirteenth-third' => NULL,
      'thirteenth-fourth' => NULL,
      'thirteenth-fifth' => NULL,
      'thirteenth-sixth' => NULL,
      'fourteenth-first' => NULL,
      'fourteenth-second' => NULL,
      'fourteenth-third' => NULL,
      'fourteenth-fourth' => NULL,
      'fourteenth-fifth' => NULL,
      'fourteenth-sixth' => NULL,
      'fifteenth-first' => NULL,
      'fifteenth-second' => NULL,
      'fifteenth-third' => NULL,
      'fifteenth-fourth' => NULL,
      'fifteenth-fifth' => NULL,
      'fifteenth-sixth' => NULL,
      'sixteenth-first' => NULL,
      'sixteenth-second' => NULL,
      'sixteenth-third' => NULL,
      'sixteenth-fourth' => NULL,
      'sixteenth-fifth' => NULL,
      'sixteenth-sixth' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '629aaee9-e7b1-4bc5-a418-b4f53608c2dc';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_9346b4f2-eb98-4a85-9faf-485bdac80bec';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2849b77c-a875-4f9f-8841-5ca5480a8096';
  $pane->panel = 'first-first';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_testimonial_node-ca_testimonial_node_1a';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2849b77c-a875-4f9f-8841-5ca5480a8096';
  $display->content['new-2849b77c-a875-4f9f-8841-5ca5480a8096'] = $pane;
  $display->panels['first-first'][0] = 'new-2849b77c-a875-4f9f-8841-5ca5480a8096';
  $pane = new stdClass();
  $pane->pid = 'new-b2412d27-408f-4992-a0d2-1e65d0842575';
  $pane->panel = 'first-first';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_testimonial_node-ca_testimonial_node_1b';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b2412d27-408f-4992-a0d2-1e65d0842575';
  $display->content['new-b2412d27-408f-4992-a0d2-1e65d0842575'] = $pane;
  $display->panels['first-first'][1] = 'new-b2412d27-408f-4992-a0d2-1e65d0842575';
  $pane = new stdClass();
  $pane->pid = 'new-f34a2a24-4d95-4cfd-8b4e-b8495508c920';
  $pane->panel = 'first-first';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '<nonce>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = '';
  $pane->uuid = 'f34a2a24-4d95-4cfd-8b4e-b8495508c920';
  $display->content['new-f34a2a24-4d95-4cfd-8b4e-b8495508c920'] = $pane;
  $display->panels['first-first'][2] = 'new-f34a2a24-4d95-4cfd-8b4e-b8495508c920';
  $pane = new stdClass();
  $pane->pid = 'new-09986d41-945c-4473-ab03-d281a3e9c267';
  $pane->panel = 'first-first';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_testimonial_node-ca_testimonial_node_client_link';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '09986d41-945c-4473-ab03-d281a3e9c267';
  $display->content['new-09986d41-945c-4473-ab03-d281a3e9c267'] = $pane;
  $display->panels['first-first'][3] = 'new-09986d41-945c-4473-ab03-d281a3e9c267';
  $pane = new stdClass();
  $pane->pid = 'new-d171c389-6501-49ac-a706-6497ee89d5d0';
  $pane->panel = 'first-first';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_testimonial_node-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'd171c389-6501-49ac-a706-6497ee89d5d0';
  $display->content['new-d171c389-6501-49ac-a706-6497ee89d5d0'] = $pane;
  $display->panels['first-first'][4] = 'new-d171c389-6501-49ac-a706-6497ee89d5d0';
  $pane = new stdClass();
  $pane->pid = 'new-c7b6a27f-7f80-4f3a-9fed-bf9bb488bbde';
  $pane->panel = 'first-first';
  $pane->type = 'block';
  $pane->subtype = 'addtoany-addtoany_button';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'ca-addtoany-feature',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'c7b6a27f-7f80-4f3a-9fed-bf9bb488bbde';
  $display->content['new-c7b6a27f-7f80-4f3a-9fed-bf9bb488bbde'] = $pane;
  $display->panels['first-first'][5] = 'new-c7b6a27f-7f80-4f3a-9fed-bf9bb488bbde';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_9346b4f2-eb98-4a85-9faf-485bdac80bec'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function ca_testimonials_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_testimonial_sort';
  $page->task = 'page';
  $page->admin_title = 'CA Testimonial: Sort';
  $page->admin_description = '';
  $page->path = 'testimonial/admin/sort';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 192508511,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Sort',
    'name' => 'navigation',
    'weight' => '10',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_testimonial_sort_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_testimonial_sort';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'CA Testimonial: Sort',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-testimonial-admin',
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
  );
  $display->cache = array();
  $display->title = 'Testimonial Sort';
  $display->uuid = '188215c1-9ca9-4b14-875b-c0a53c2b8d5c';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_ca_testimonial_sort_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-8b534f8f-feac-415e-b30a-9471fa9260c4';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_testimonial_sort-ca_testimonial_sort';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8b534f8f-feac-415e-b30a-9471fa9260c4';
  $display->content['new-8b534f8f-feac-415e-b30a-9471fa9260c4'] = $pane;
  $display->panels['middle'][0] = 'new-8b534f8f-feac-415e-b30a-9471fa9260c4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-8b534f8f-feac-415e-b30a-9471fa9260c4';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_testimonial_sort'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_testimonials_add_testimonial';
  $page->task = 'page';
  $page->admin_title = 'CA Testimonials: Add Testimonial';
  $page->admin_description = '';
  $page->path = 'testimonial/add_testimonial';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 192508511,
            3 => 39516467,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Add Testimonial',
    'name' => 'navigation',
    'weight' => '1',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_testimonials_add_testimonial_menu_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_testimonials_add_testimonial';
  $handler->handler = 'menu_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Context Admin',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'context_admin_options' => 'node_create_menu',
    'context_admin_options_items' => 'ca_testimonial',
    'context_admin_use_node_edit' => 0,
    'submitted_context' => 'empty',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_testimonials_add_testimonial'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_testimonials_administration';
  $page->task = 'page';
  $page->admin_title = 'CA Testimonials: Administration';
  $page->admin_description = '';
  $page->path = 'testimonial/admin/administration';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 192508511,
            3 => 39516467,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Administer',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'tab',
      'title' => 'Administration',
      'name' => 'navigation',
      'weight' => '2',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_testimonials_administration_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_testimonials_administration';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'CA Testimonials: Admin',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 3,
              1 => 4,
              2 => 192508511,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-testimonial-admin',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Administer';
  $display->uuid = '7e92911c-16dd-4464-967a-f9d5e250cc10';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_ca_testimonials_administration_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-aece1212-0896-4160-83bc-02ba0074a656';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_testimonial_admin-ca_testimonial_admin';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'aece1212-0896-4160-83bc-02ba0074a656';
  $display->content['new-aece1212-0896-4160-83bc-02ba0074a656'] = $pane;
  $display->panels['middle'][0] = 'new-aece1212-0896-4160-83bc-02ba0074a656';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_testimonials_administration_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'ca_testimonials_administration';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'CA Testimonials: Creator Admin',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 39516467,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-testimonial-admin',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Administer';
  $display->uuid = 'a97de17b-7d90-4602-b67c-eb93ea3d2772';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_ca_testimonials_administration_panel_context_2';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-a066d943-2321-44a0-9989-486176a258a2';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_testimonial_admin-ca_testimonial_creator_admin';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a066d943-2321-44a0-9989-486176a258a2';
  $display->content['new-a066d943-2321-44a0-9989-486176a258a2'] = $pane;
  $display->panels['middle'][0] = 'new-a066d943-2321-44a0-9989-486176a258a2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_testimonials_administration'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_testimonials_list_view';
  $page->task = 'page';
  $page->admin_title = 'CA Testimonials: List View';
  $page->admin_description = '';
  $page->path = 'testimonial/view';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'View',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Testimonials',
      'name' => 'main-menu',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_testimonials_list_view__panel_context_ca5650fe-39ab-4fd7-ac0d-89f4b9c55a91';
  $handler->task = 'page';
  $handler->subtask = 'ca_testimonials_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Testimonials: List View',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-testimonials-list ca-testimonials-list-template-1',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3ad6dc39-52f1-47a9-a87f-11782cd433da';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_ca_testimonials_list_view__panel_context_ca5650fe-39ab-4fd7-ac0d-89f4b9c55a91';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f5cf4a28-d940-4454-b67c-cea96866b78b';
  $pane->panel = 'first-first';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_testimonial_list-ca_testimonial_list_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f5cf4a28-d940-4454-b67c-cea96866b78b';
  $display->content['new-f5cf4a28-d940-4454-b67c-cea96866b78b'] = $pane;
  $display->panels['first-first'][0] = 'new-f5cf4a28-d940-4454-b67c-cea96866b78b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_testimonials_list_view_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_testimonials_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'CA Testimonials: List View',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-testimonials-list ca-testimonials-list-template-1',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3ad6dc39-52f1-47a9-a87f-11782cd433da';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_ca_testimonials_list_view_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f5cf4a28-d940-4454-b67c-cea96866b78b';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_testimonial_list-ca_testimonial_list_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f5cf4a28-d940-4454-b67c-cea96866b78b';
  $display->content['new-f5cf4a28-d940-4454-b67c-cea96866b78b'] = $pane;
  $display->panels['middle'][0] = 'new-f5cf4a28-d940-4454-b67c-cea96866b78b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_testimonials_list_view'] = $page;

  return $pages;

}
