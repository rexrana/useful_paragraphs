<?php
/**
 * @file
 * useful_paragraphs.features.inc
 */

/**
 * Implements hook_paragraphs_info().
 */
function useful_paragraphs_paragraphs_info() {
  $items = array(
    'code_snippet' => array(
      'name' => 'Code Snippet',
      'bundle' => 'code_snippet',
      'locked' => '1',
    ),
    'figure_media' => array(
      'name' => 'Figure (media)',
      'bundle' => 'figure_media',
      'locked' => '1',
    ),
    'file' => array(
      'name' => 'Files',
      'bundle' => 'file',
      'locked' => '1',
    ),
    'hero' => array(
      'name' => 'Hero',
      'bundle' => 'hero',
      'locked' => '1',
    ),
    'quote' => array(
      'name' => 'Quote',
      'bundle' => 'quote',
      'locked' => '1',
    ),
    'text' => array(
      'name' => 'Text',
      'bundle' => 'text',
      'locked' => '1',
    ),
  );
  return $items;
}
