<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function ext_context_blocks_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ext_content_blocks';
  $context->description = 'Sets content region blocks on non-edit pages. Includes content right and addtoany block';
  $context->tag = 'path';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~node/*/edit' => '~node/*/edit',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-gallery_photos-block_1' => array(
          'module' => 'views',
          'delta' => 'gallery_photos-block_1',
          'region' => 'content_right',
          'weight' => -10,
        ),
        'views-site_announcement-block_1' => array(
          'module' => 'views',
          'delta' => 'site_announcement-block_1',
          'region' => 'content_right',
          'weight' => 1,
        ),
        'views-page_images-block_1' => array(
          'module' => 'views',
          'delta' => 'page_images-block_1',
          'region' => 'content_right',
          'weight' => 2,
        ),
        'views-page_images-block_2' => array(
          'module' => 'views',
          'delta' => 'page_images-block_2',
          'region' => 'content_right',
          'weight' => 3,
        ),
        'addtoany-0' => array(
          'module' => 'addtoany',
          'delta' => 0,
          'region' => 'content_bottom',
          'weight' => 50,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sets content region blocks on non-edit pages. Includes content right and addtoany block');
  t('path');
  $export['ext_content_blocks'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ext_front_blocks';
  $context->description = 'Sets default Extension/Combined front page default blocks';
  $context->tag = 'path';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'extension_settings-0' => array(
          'module' => 'extension_settings',
          'delta' => 0,
          'region' => 'sidebar_last',
          'weight' => 0,
        ),
        'views-social_media_links-block_1' => array(
          'module' => 'views',
          'delta' => 'social_media_links-block_1',
          'region' => 'sidebar_last',
          'weight' => 1,
        ),
        'extension_settings-12' => array(
          'module' => 'extension_settings',
          'delta' => 12,
          'region' => 'sidebar_last',
          'weight' => 2,
        ),
        'extension_settings-13' => array(
          'module' => 'extension_settings',
          'delta' => 13,
          'region' => 'sidebar_last',
          'weight' => 3,
        ),
        'user-1' => array(
          'module' => 'user',
          'delta' => 1,
          'region' => 'sidebar_last',
          'weight' => 4,
        ),
        'extension_settings-9' => array(
          'module' => 'extension_settings',
          'delta' => 9,
          'region' => 'content_top',
          'weight' => 0,
        ),
        'views-site_announcement-block_2' => array(
          'module' => 'views',
          'delta' => 'site_announcement-block_2',
          'region' => 'content_right',
          'weight' => 0,
        ),
        'extension_settings-1' => array(
          'module' => 'extension_settings',
          'delta' => 1,
          'region' => 'content_bottom',
          'weight' => 0,
        ),
        'extension_settings-11' => array(
          'module' => 'extension_settings',
          'delta' => 11,
          'region' => 'content_bottom',
          'weight' => 1,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sets default Extension/Combined front page default blocks');
  t('path');
  $export['ext_front_blocks'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ext_sidebar_blocks';
  $context->description = 'Sets default Extension/Combined sidebar blocks';
  $context->tag = 'path';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
        '~admin*' => '~admin*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'extension_settings-0' => array(
          'module' => 'extension_settings',
          'delta' => 0,
          'region' => 'sidebar_last',
          'weight' => 0,
        ),
        'ask_expert-0' => array(
          'module' => 'ask_expert',
          'delta' => 0,
          'region' => 'sidebar_last',
          'weight' => 1,
        ),
        'views-social_media_links-block_1' => array(
          'module' => 'views',
          'delta' => 'social_media_links-block_1',
          'region' => 'sidebar_last',
          'weight' => 2,
        ),
        'extension_settings-12' => array(
          'module' => 'extension_settings',
          'delta' => 12,
          'region' => 'sidebar_last',
          'weight' => 3,
        ),
        'extension_settings-13' => array(
          'module' => 'extension_settings',
          'delta' => 13,
          'region' => 'sidebar_last',
          'weight' => 4,
        ),
        'user-1' => array(
          'module' => 'user',
          'delta' => 1,
          'region' => 'sidebar_last',
          'weight' => 5,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sets default Extension/Combined sidebar blocks');
  t('path');
  $export['ext_sidebar_blocks'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ext_sitewide_blocks';
  $context->description = 'Sets default sitewide blocks';
  $context->tag = 'path';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'extension_settings-5' => array(
          'module' => 'extension_settings',
          'delta' => 5,
          'region' => 'header_top',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sets default sitewide blocks');
  t('path');
  $export['ext_sitewide_blocks'] = $context;

  return $export;
}
