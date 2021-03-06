<?php

/**
 * The base class for metadata formats.
 */
class views_oai_pmh_format {
  /**
   * The identifier (or 'prefix', in OAI-PMH's terminology) for this metadata
   * format.
   *
   * @var string
   */
  public $id = '';

  /**
   * A descriptive name of the data format.
   *
   * @var string
   */
  public $label = '';

  /**
   * The schema for this format.
   *
   * @var string
   */
  public $schema = '';

  /**
   * The metadata namespace for this format.
   *
   * @var string
   */
  public $metadata_namespace = '';

  /**
   * An array describing the attributes that are allowed for each tag of the
   * metadata format.
   *
   * @var array
   */
  public $attributes;

  /**
   * An array describing the mapping options, tags or attributes, for use in
   * the mapping interface.
   *
   * @var array
   */
  public $elements;

  /**
   * The element that acts as the root of each OAI record in the generated XML.
   *
   * @var string
   */
  public $root_element = '';

  /**
   * The attributes to assign to the root tag.
   *
   * @var array
   */
  public $root_attributes;

  public function __construct($id, $label) {
    $this->id = $id;
    $this->label = $label;
    $this->attributes = array();
    $this->elements = array('none' => t('- None -'));
    $this->root_attributes = array();
  }
}