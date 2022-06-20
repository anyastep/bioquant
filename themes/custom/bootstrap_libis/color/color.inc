<?php

/**
 * @file
 * Lists available colors and color schemes for the Bootstrap LIBIS theme.
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
      'title' => t('LIBIS Colors'),
      'colors' => [
        'top' => '#043a70',
        'bottom' => '#d6e1f3',
        'bg' => '#f6f6f9',
        'sidebar' => '#d6e1f3',
        'sidebarborders' => '#f6f6f9',
        'footer' => '#043a70',
        'button' => '#f9b023',
        'buttonhover' => '#f9b023',
        'titleslogan' => '#043a70',
        'text' => '#043a70',
        'link' => '#043a70',
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
  'preview_library' => 'bootstrap_libis/color.preview',
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
