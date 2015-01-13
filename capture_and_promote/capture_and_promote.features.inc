<?php
/**
 * @file
 * capture_and_promote.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function capture_and_promote_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_validation" && $api == "default_field_validation_rules") {
    return array("version" => "2");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function capture_and_promote_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function capture_and_promote_image_default_styles() {
  $styles = array();

  // Exported image style: 220_blur.
  $styles['220_blur'] = array(
    'name' => '220_blur',
    'label' => '220 blur',
    'effects' => array(
      10 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '220',
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => '1',
      ),
      11 => array(
        'label' => 'Crop',
        'help' => 'Cropping will remove portions of an image to make it the specified dimensions.',
        'effect callback' => 'image_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_crop_form',
        'summary theme' => 'image_crop_summary',
        'module' => 'image',
        'name' => 'image_crop',
        'data' => array(
          'width' => '220',
          'height' => '100',
          'anchor' => 'center-center',
        ),
        'weight' => '2',
      ),
      12 => array(
        'label' => 'IEK - Filter',
        'help' => 'Apply a filter to an image',
        'effect callback' => 'iek_image_filter_effect',
        'form callback' => 'iek_image_filter_form',
        'summary theme' => 'iek_image_filter_summary',
        'module' => 'iek',
        'name' => 'iek_image_filter',
        'data' => array(
          'filter_name' => '7',
          'repeat' => '35',
          'arg1' => '10',
          'arg2' => '0',
          'arg3' => '0',
          'arg4' => '0',
        ),
        'weight' => '3',
      ),
    ),
  );

  // Exported image style: 738_max_width.
  $styles['738_max_width'] = array(
    'name' => '738_max_width',
    'label' => '738 max width',
    'effects' => array(
      9 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '738',
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: background_blur.
  $styles['background_blur'] = array(
    'name' => 'background_blur',
    'label' => 'background blur',
    'effects' => array(
      9 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '970',
          'height' => '150',
        ),
        'weight' => '1',
      ),
      10 => array(
        'label' => 'IEK - Filter',
        'help' => 'Apply a filter to an image',
        'effect callback' => 'iek_image_filter_effect',
        'form callback' => 'iek_image_filter_form',
        'summary theme' => 'iek_image_filter_summary',
        'module' => 'iek',
        'name' => 'iek_image_filter',
        'data' => array(
          'filter_name' => '7',
          'repeat' => '35',
          'arg1' => '10',
          'arg2' => '0',
          'arg3' => '0',
          'arg4' => '0',
        ),
        'weight' => '2',
      ),
    ),
  );

  // Exported image style: half-page-width.
  $styles['half-page-width'] = array(
    'name' => 'half-page-width',
    'label' => 'half-page-width',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '460',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function capture_and_promote_node_info() {
  $items = array(
    'project' => array(
      'name' => t('Project Story'),
      'base' => 'node_content',
      'description' => t('As part of the Capture and Promote project, this is a place to promote the projects that you\'ve worked on to our patrons'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('<h1>How to write some good story content!</h1>
<p>But will any whaleman believe these stories? No. The whale of to-day is as big as his ancestors in Pliny\'s time. And if ever I go where Pliny is, I, a whaleman (more than he was), will make bold to tell him so. Because I cannot understand how it is, that while the Egyptian mummies that were buried thousands of years before even Pliny was born, do not measure so much in their coffins as a modern Kentuckian in his socks; and while the cattle and other animals sculptured on the oldest Egyptian and Nineveh tablets, by the relative proportions in which they are drawn, just as plainly prove that the high-bred, stall-fed, prize cattle of Smithfield, not only equal, but far exceed in magnitude the fattest of Pharaoh\'s fat kine; in the face of all this, I will not admit that of all animals the whale alone should have degenerated.</p>
<h2>How to write some good story content!</h2>
<ul>
<li>But will any whaleman believe these stories? No</li>
<li> The whale of to-day is as big as his ancestors in Pliny\'s time</li>
<li> And if ever I go where Pliny is, I, a whaleman (more than he was), will make bold to tell him so</li>
</ul>'),
    ),
    'report' => array(
      'name' => t('Project Report'),
      'base' => 'node_content',
      'description' => t('More formal place to describe a project to your peers at other libraries.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
