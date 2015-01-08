<?php
/**
 * @file
 * ncsu_lib_events_and_spaces.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ncsu_lib_events_and_spaces_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ncsu_lib_events_and_spaces_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function ncsu_lib_events_and_spaces_image_default_styles() {
  $styles = array();

  // Exported image style: 738.
  $styles['738'] = array(
    'name' => 738,
    'label' => '738',
    'effects' => array(
      10 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '738',
          'height' => '554',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: artbox.
  $styles['artbox'] = array(
    'name' => 'artbox',
    'effects' => array(
      7 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 400,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => -9,
      ),
      9 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 400,
          'height' => 250,
        ),
        'weight' => 3,
      ),
    ),
    'label' => 'artbox',
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function ncsu_lib_events_and_spaces_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('An event is any event that happens in our physical spaces or that we are responsible for hosting.  This content is fed by a Feed Importer and can be modified after imports to add more metadata.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'space' => array(
      'name' => t('Space'),
      'base' => 'node_content',
      'description' => t('Any physical space in our various buildings.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
