<?php
/**
 * @file
 * useful_paragraphs.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function useful_paragraphs_default_picture_mapping() {
  $export = array();

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'hero background';
  $picture_mapping->machine_name = 'hero_background';
  $picture_mapping->breakpoint_group = 'rexrana';
  $picture_mapping->mapping = array(
    'breakpoints.theme.rexrana.hd' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'scale_width_1920',
      ),
    ),
    'breakpoints.theme.rexrana.extra_large' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'scale_width_1600',
      ),
    ),
    'breakpoints.theme.rexrana.large' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'scale_width_1280',
      ),
      '1.5x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'scale_width_1920',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'scale_width_2560',
      ),
    ),
    'breakpoints.theme.rexrana.medium' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'scale_width_0960',
      ),
      '1.5x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'scale_width_1440',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'scale_width_1920',
      ),
    ),
    'breakpoints.theme.rexrana.small' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'scale_width_0640',
      ),
      '1.5x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'scale_width_0960',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'scale_width_1280',
      ),
    ),
    'breakpoints.theme.rexrana.tiny' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'scale_width_0320',
      ),
      '1.5x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'scale_width_0480',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'scale_width_0640',
      ),
    ),
  );
  $export['hero_background'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'inline';
  $picture_mapping->machine_name = 'inline';
  $picture_mapping->breakpoint_group = 'rexrana';
  $picture_mapping->mapping = array(
    'breakpoints.theme.rexrana.hd' => array(
      '1x' => array(
        'mapping_type' => '_none',
      ),
    ),
    'breakpoints.theme.rexrana.extra_large' => array(
      '1x' => array(
        'mapping_type' => '_none',
      ),
    ),
    'breakpoints.theme.rexrana.large' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'scale_width_1280',
      ),
      '1.5x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'scale_width_1920',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'scale_width_2560',
      ),
    ),
    'breakpoints.theme.rexrana.medium' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'scale_width_0960',
      ),
      '1.5x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'scale_width_1440',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'scale_width_1920',
      ),
    ),
    'breakpoints.theme.rexrana.small' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'scale_width_0640',
      ),
      '1.5x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'scale_width_0960',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'scale_width_1280',
      ),
    ),
    'breakpoints.theme.rexrana.tiny' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'scale_width_0320',
      ),
      '1.5x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'scale_width_0480',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'scale_width_0640',
      ),
    ),
  );
  $export['inline'] = $picture_mapping;

  return $export;
}
