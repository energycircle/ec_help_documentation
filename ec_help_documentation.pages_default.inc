<?php
/**
 * @file
 * ec_help_documentation.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function ec_help_documentation_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ec_help_documentation';
  $page->task = 'page';
  $page->admin_title = 'EC Help Documentation';
  $page->admin_description = 'Used for internal documentation';
  $page->path = 'admin/help-documentation';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'access content overview',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'or',
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'EC Help Documentation',
    'name' => 'management',
    'weight' => '50',
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
  $handler->name = 'page_ec_help_documentation_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ec_help_documentation';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
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
  $display->layout = 'two_66_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'EC Help Documentation';
  $display->uuid = 'c8b96c6e-92d1-462c-9aa3-02a95cb718e7';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-5cc71db6-a019-4a68-bddb-d2a0c1065766';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'views_panes';
  $pane->subtype = 'ec_help_documentation-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5cc71db6-a019-4a68-bddb-d2a0c1065766';
  $display->content['new-5cc71db6-a019-4a68-bddb-d2a0c1065766'] = $pane;
  $display->panels['two_66_33_first'][0] = 'new-5cc71db6-a019-4a68-bddb-d2a0c1065766';
  $pane = new stdClass();
  $pane->pid = 'new-57d11cae-c830-4a89-959c-ffcaf43b1cad';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'menu_tree';
  $pane->subtype = 'menu-help-documents';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'menu_name' => 'menu-help-documents',
    'parent_mlid' => 0,
    'parent' => 'menu-help-documents:0',
    'title_link' => 0,
    'admin_title' => '',
    'level' => '1',
    'follow' => 0,
    'depth' => '0',
    'expanded' => 0,
    'sort' => 0,
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '57d11cae-c830-4a89-959c-ffcaf43b1cad';
  $display->content['new-57d11cae-c830-4a89-959c-ffcaf43b1cad'] = $pane;
  $display->panels['two_66_33_second'][0] = 'new-57d11cae-c830-4a89-959c-ffcaf43b1cad';
  $pane = new stdClass();
  $pane->pid = 'new-b404d566-6d71-4cbb-aab1-ed250fc92d32';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'views_panes';
  $pane->subtype = 'ec_help_documentation-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b404d566-6d71-4cbb-aab1-ed250fc92d32';
  $display->content['new-b404d566-6d71-4cbb-aab1-ed250fc92d32'] = $pane;
  $display->panels['two_66_33_second'][1] = 'new-b404d566-6d71-4cbb-aab1-ed250fc92d32';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ec_help_documentation'] = $page;

  return $pages;

}
