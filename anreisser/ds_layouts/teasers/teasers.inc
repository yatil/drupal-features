<?php
function ds_teasers() {
  return array(
    'label' => t('Teasers'),
    'regions' => array(
    	'title' => t('Title'),
      'text' => t('Text'),
      'url' => t('URL'),
      'image' => t('Image')
    ),
    // Add this line if there is a default css file.
    //'css' => FALSE,
  );
}
?>
