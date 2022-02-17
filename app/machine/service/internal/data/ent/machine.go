// Code generated by entc, DO NOT EDIT.

package ent

import (
	"fmt"
	"htp-platform/app/machine/service/internal/data/ent/machine"
	"strings"
	"time"

	"entgo.io/ent/dialect/sql"
)

// Machine is the model entity for the Machine schema.
type Machine struct {
	config `json:"-"`
	// ID of the ent.
	ID int64 `json:"id,omitempty"`
	// UserID holds the value of the "user_id" field.
	UserID int64 `json:"user_id,omitempty"`
	// Address holds the value of the "address" field.
	Address string `json:"address,omitempty"`
	// CreatedAt holds the value of the "created_at" field.
	CreatedAt time.Time `json:"created_at,omitempty"`
	// UpdatedAt holds the value of the "updated_at" field.
	UpdatedAt time.Time `json:"updated_at,omitempty"`
}

// scanValues returns the types for scanning values from sql.Rows.
func (*Machine) scanValues(columns []string) ([]interface{}, error) {
	values := make([]interface{}, len(columns))
	for i := range columns {
		switch columns[i] {
		case machine.FieldID, machine.FieldUserID:
			values[i] = new(sql.NullInt64)
		case machine.FieldAddress:
			values[i] = new(sql.NullString)
		case machine.FieldCreatedAt, machine.FieldUpdatedAt:
			values[i] = new(sql.NullTime)
		default:
			return nil, fmt.Errorf("unexpected column %q for type Machine", columns[i])
		}
	}
	return values, nil
}

// assignValues assigns the values that were returned from sql.Rows (after scanning)
// to the Machine fields.
func (m *Machine) assignValues(columns []string, values []interface{}) error {
	if m, n := len(values), len(columns); m < n {
		return fmt.Errorf("mismatch number of scan values: %d != %d", m, n)
	}
	for i := range columns {
		switch columns[i] {
		case machine.FieldID:
			value, ok := values[i].(*sql.NullInt64)
			if !ok {
				return fmt.Errorf("unexpected type %T for field id", value)
			}
			m.ID = int64(value.Int64)
		case machine.FieldUserID:
			if value, ok := values[i].(*sql.NullInt64); !ok {
				return fmt.Errorf("unexpected type %T for field user_id", values[i])
			} else if value.Valid {
				m.UserID = value.Int64
			}
		case machine.FieldAddress:
			if value, ok := values[i].(*sql.NullString); !ok {
				return fmt.Errorf("unexpected type %T for field address", values[i])
			} else if value.Valid {
				m.Address = value.String
			}
		case machine.FieldCreatedAt:
			if value, ok := values[i].(*sql.NullTime); !ok {
				return fmt.Errorf("unexpected type %T for field created_at", values[i])
			} else if value.Valid {
				m.CreatedAt = value.Time
			}
		case machine.FieldUpdatedAt:
			if value, ok := values[i].(*sql.NullTime); !ok {
				return fmt.Errorf("unexpected type %T for field updated_at", values[i])
			} else if value.Valid {
				m.UpdatedAt = value.Time
			}
		}
	}
	return nil
}

// Update returns a builder for updating this Machine.
// Note that you need to call Machine.Unwrap() before calling this method if this Machine
// was returned from a transaction, and the transaction was committed or rolled back.
func (m *Machine) Update() *MachineUpdateOne {
	return (&MachineClient{config: m.config}).UpdateOne(m)
}

// Unwrap unwraps the Machine entity that was returned from a transaction after it was closed,
// so that all future queries will be executed through the driver which created the transaction.
func (m *Machine) Unwrap() *Machine {
	tx, ok := m.config.driver.(*txDriver)
	if !ok {
		panic("ent: Machine is not a transactional entity")
	}
	m.config.driver = tx.drv
	return m
}

// String implements the fmt.Stringer.
func (m *Machine) String() string {
	var builder strings.Builder
	builder.WriteString("Machine(")
	builder.WriteString(fmt.Sprintf("id=%v", m.ID))
	builder.WriteString(", user_id=")
	builder.WriteString(fmt.Sprintf("%v", m.UserID))
	builder.WriteString(", address=")
	builder.WriteString(m.Address)
	builder.WriteString(", created_at=")
	builder.WriteString(m.CreatedAt.Format(time.ANSIC))
	builder.WriteString(", updated_at=")
	builder.WriteString(m.UpdatedAt.Format(time.ANSIC))
	builder.WriteByte(')')
	return builder.String()
}

// Machines is a parsable slice of Machine.
type Machines []*Machine

func (m Machines) config(cfg config) {
	for _i := range m {
		m[_i].config = cfg
	}
}
