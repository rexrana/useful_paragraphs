<?php
/**
 * @file
 * useful_paragraphs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function useful_paragraphs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "breakpoints" && $api == "default_breakpoints") {
    return array("version" => "1");
  }
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "2");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function useful_paragraphs_image_default_styles() {
  $styles = array();

  // Exported image style: scale_width_0320.
  $styles['scale_width_0320'] = array(
    'label' => 'scale width 320',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 320,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: scale_width_0480.
  $styles['scale_width_0480'] = array(
    'label' => 'scale width 480',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 480,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: scale_width_0640.
  $styles['scale_width_0640'] = array(
    'label' => 'scale width 640',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 640,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: scale_width_0960.
  $styles['scale_width_0960'] = array(
    'label' => 'scale width 960',
    'effects' => array(
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 960,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: scale_width_1280.
  $styles['scale_width_1280'] = array(
    'label' => 'scale width 1280',
    'effects' => array(
      5 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1280,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: scale_width_1440.
  $styles['scale_width_1440'] = array(
    'label' => 'scale width 1440',
    'effects' => array(
      6 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1440,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: scale_width_1600.
  $styles['scale_width_1600'] = array(
    'label' => 'scale width 1600',
    'effects' => array(
      7 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1600,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: scale_width_1920.
  $styles['scale_width_1920'] = array(
    'label' => 'scale width 1920',
    'effects' => array(
      8 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1920,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: scale_width_2560.
  $styles['scale_width_2560'] = array(
    'label' => 'scale width 2560',
    'effects' => array(
      9 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 2560,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

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
