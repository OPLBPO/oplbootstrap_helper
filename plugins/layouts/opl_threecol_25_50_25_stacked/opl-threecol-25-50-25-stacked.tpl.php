<div class="<?php print $classes ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <?php if ($content['top']): ?>
    <div class="row">
      <div class="col-md-12"><?php print $content['top']; ?></div>
    </div>
  <?php endif ?>

  <?php if ($content['left'] || $content['center'] || $content['right']): ?>
    <div class="row main-page-content"> <!-- @TODO: Add extra classes -->
      <div class="row-height">
        <div class="col-md-3 col-height home-events">
          <div class="inside">
            <h2 class="home-col-header"><?php print t('Events');?></h2>
            <?php print $content['left']; ?>
          </div>
        </div>  
        <div class="col-md-6 col-height home-collections">
          <div class="inside">
            <h2 class="home-col-header"><?php print t('Collections');?> - <span><?php print t('Books, music, movies, magazines and more!');?></span></h2>
            <?php print $content['center']; ?>
          </div>
        </div>
        <div class="col-md-3 col-height home-featured">
          <div class="inside">
            <h2 class="home-col-header"><?php print t('Featured');?></h2>
            <?php print $content['right']; ?>
          </div>
        </div>
      </div>
    </div>
  <?php endif ?>

  <?php if ($content['bottom']): ?>
    <div class="row">
      <div class="col-md-12"><?php print $content['bottom']; ?></div>
    </div>
  <?php endif ?>
</div>