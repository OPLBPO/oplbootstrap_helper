<div class="<?php print $classes ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <?php if ($content['top']): ?>
    <div class="row">
      <div class="col-md-12"><?php print $content['top']; ?></div>
    </div>
  <?php endif ?>

  <?php if ($content['left'] || $content['right']): ?>
    <div class="row"> <!-- @TODO: Add extra classes -->
      <div class="col-md-9"><?php print $content['left']; ?></div>
      <div class="col-md-3"><?php print $content['right']; ?></div>
    </div>
  <?php endif ?>

  <?php if ($content['bottom']): ?>
    <div class="row">
      <div class="col-md-12"><?php print $content['bottom']; ?></div>
    </div>
  <?php endif ?>
</div>