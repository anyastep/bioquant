<?php

/**
 * @file
 * Lists available colors and color schemes for the Bootstrap BioQuant theme.
 */

$info = [
  // Available colors and color labels used in theme.
  'fields' => [
    'top' => t('Header background top'),
    'bottom' => t('Header background bottom'),
    'bg' => t('Main background'),
    'sidebar' => t('Sidebar background'),
    'sidebarborders' => t('Sidebar borders'),
    'footer' => t('Footer background'),
    'button' => t('Primary button background'),
    'buttonhover' => t('Primary button hover'),
    'titleslogan' => t('Title and slogan'),
    'text' => t('Text color'),
    'link' => t('Link color'),
  ],
  // Pre-defined color schemes.
  'schemes' => [
    'default' => [
      'title' => t('BioQuant Colors'),
      'colors' => [
        'top' => '#dee3ea',
        'bottom' => '#dee3ea',
        'bg' => '#fcfdff',
        'sidebar' => '#dee3ea',
        'sidebarborders' => '#fcfdff',
        'footer' => '#242426',
        'button' => '#109b9e',
        'buttonhover' => '#8a1b6a',
        'titleslogan' => '#242426',
        'text' => '#242426',
        'link' => '#109b9e',
      ],
    ],
  ],

  // CSS files (excluding @import) to rewrite with new color scheme.
  'css' => [
    'css/colors.css',
  ],

  // Files to copy.
  'copy' => [
    'logo.svg',
  ],

  // Preview files.
  'preview_library' => 'bootstrap_bq/color.preview',
  'preview_html' => 'color/preview.html',

  // Attachments.
  '#attached' => [
    'drupalSettings' => [
      'color' => [
        // Put the logo path into JavaScript for the live preview.
        'logo' => theme_get_setting('logo.url', 'bootstrap_barrio_subtheme'),
      ],
    ],
  ],
];
