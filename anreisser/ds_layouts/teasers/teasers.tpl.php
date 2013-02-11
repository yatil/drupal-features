<?php if ($url): ?>
<a href="<?php print $url; ?>">
<?php endif; ?>

  <?php if ($title): ?>
    <h3><?php print $title; ?></h3>
  <?php endif; ?>

  <?php if ($text): ?>
    <p><?php print $text; ?></p>
  <?php endif; ?>

  <?php if ($image): ?>
    <p><?php print $image; ?></p>
  <?php endif; ?>

<?php if ($url): ?>
</a>
<?php endif; ?>
