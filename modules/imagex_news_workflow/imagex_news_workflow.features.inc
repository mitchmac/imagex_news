<?php
/**
 * @file
 * imagex_news_workflow.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function imagex_news_workflow_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}